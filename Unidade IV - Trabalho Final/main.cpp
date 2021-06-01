#include <iostream>
#include <iomanip>
#include "Banco.h"
#include "Conta.h"
#include "ContaCorrenteComLimite.h"
#include "ContaCorrenteComum.h"
#include "ContaPoupanca.h"
#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

using namespace std;

int main(void) {
  Banco *banco (new Banco(new PessoaJuridica("Banco", "123456789", "12345")));

  while (true) {
    char opcao;
    cout << "SISTEMA DO BANCO C++AIXA" << endl;
    cout << "Voce e cliente(1) ou gerente(2)? ";
    cin >> opcao;
    if (opcao == '1') {
      string numero;
      cout << "Bem vindo, cliente. Digite o numero da sua conta: ";
      cin >> numero;
      if (numero != "-1") {
        for (int i = 0; i < banco->contas.size(); i++) {
          if (banco->contas[i]->getNumero() == numero) {
            Conta *conta (banco->contas[i]);
            char opcao2;
            while(true) {
              cout << "O que deseja fazer?" << endl;
              cout << "1 - Depositar" << endl;
              cout << "2 - Retirar" << endl;
              cout << "3 - Transferir" << endl;
              cout << "4 - Ver saldo" << endl;
              cout << "5 - Extrato" << endl;
              cout << "6 - Sair do sistema" << endl;
              cout << "Opcao: ";
              cin >> opcao2;
              if (opcao2 == '1') {
                double valor;
                cout << "Digite o valor: ";
                cin >> valor;
                *conta << valor;
                cout << "Deposito feito com sucesso" << endl;
              } else if (opcao2 == '2') {
                double valor;
                cout << "Digite o valor: ";
                cin >> valor;
                *conta >> valor;
                cout << "Retirada feita com sucesso" << endl;
              } else if (opcao2 == '3') {
                string numeroDestino;
                double valor;
                cout << "Digite o numero da conta destino: ";
                cin >> numeroDestino;
                cout << "Digite o valor: "; 
                cin >> valor;
                for (int i = 0; i < banco->contas.size(); i++) {
                  if (banco->contas[i]->getNumero() == numeroDestino) {
                    Conta *contaDestino (banco->contas[i]);
                    conta->transferir(contaDestino, valor);
                    cout << "Transferencia feita com sucesso" << endl;
                    break;
                  }
                }
              } else if (opcao2 == '4') {
                cout << fixed << "Saldo da conta: " << setprecision(2) << conta->getSaldo() << endl;
              } else if (opcao2 == '5') {
                conta->extrato();
              } else if (opcao2 == '6') {
                break;
              }
            }
          }
        }
      } else {
        cout << "Programa encerrado..." << endl;
        break;
      }
    } else if (opcao == '2') {
      char opcao2;
      while(true) {
        cout << "O que deseja fazer?" << endl;
        cout << "1 - Abrir conta" << endl;
        cout << "2 - Consultar conta" << endl;
        cout << "3 - Atualizar conta" << endl;
        cout << "4 - Fechar conta" << endl;
        cout << "5 - Sair do sistema" << endl;
        cout << "Opcao: ";
        cin >> opcao2;
        if (opcao2 == '1') {
          char opcao3;
          cout << "Escolha o tipo de conta";
          cout << "1 - Corrente Com Limite" << endl;
          cout << "2 - Corrente Comum" << endl;
          cout << "3 - Poupanca" << endl;
          cout << "Opcao: ";
          cin >> opcao3;
          if (opcao3 == '1') {
            string nome, CPF, numero;
            double saldo, limite;
            cout << "Digite o nome da pessoa: ";
            cin >> nome;
            cout << "Digite o CPF: ";
            cin >> CPF;
            cout << "Digite o numero da conta: ";
            cin >> numero;
            cout << "Digite o saldo: ";
            cin >> saldo;
            cout << "Digite o limite: ";
            cin >> limite;
            PessoaFisica *pf = new PessoaFisica(nome, CPF);
            banco->cadastrarConta(pf, new ContaCorrenteComLimite(pf, numero, saldo, limite));
            cout << "Conta cadastrada com sucesso" << endl;
            continue;
          } else if (opcao3 == '2') {
            string nome, CPF, numero;
            double saldo;
            cout << "Digite o nome da pessoa: ";
            cin >> nome;
            cout << "Digite o CPF: ";
            cin >> CPF;
            cout << "Digite o numero da conta: ";
            cin >> numero;
            cout << "Digite o saldo: ";
            cin >> saldo;
            PessoaFisica *pf = new PessoaFisica(nome, CPF);
            banco->cadastrarConta(pf, new ContaCorrenteComum(pf, numero, saldo));
            cout << "Conta cadastrada com sucesso" << endl;
            continue;
          } else if (opcao3 == '3') {
            string nome, CPF, numero, aniversario;
            double saldo;
            cout << "Digite o nome da pessoa: ";
            cin >> nome;
            cout << "Digite o CPF: ";
            cin >> CPF;
            cout << "Digite o numero da conta: ";
            cin >> numero;
            cout << "Digite o saldo: ";
            cin >> saldo;
            cout << "Digite o aniversario: ";
            cin >> aniversario;
            PessoaFisica *pf = new PessoaFisica(nome, CPF);
            banco->cadastrarConta(pf, new ContaPoupanca(pf, numero, saldo, aniversario));
            cout << "Conta cadastrada com sucesso" << endl;
          }
        } else if (opcao2 == '2') {
          string numero;
          cout << "Digite o numero da conta: ";
          cin >> numero;
          banco->consultarConta(numero);
        } else if (opcao2 == '3') {
          string numero;
          double saldo;
          cout << "Digite o numero da conta: ";
          cin >> numero;
          cout << "Digite o valor: "
          cin >> saldo;
          banco->atualizarConta(numero, saldo);
        } else if (opcao2 == '4') {
          string numero;
          cout << "Digite o numero da conta: ";
          cin >> numero;
          banco->removerConta(numero);
        }
      }
    }
    
    delete banco;

    return 0;
  }
}
