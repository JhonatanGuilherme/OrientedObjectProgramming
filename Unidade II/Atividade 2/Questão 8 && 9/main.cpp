#include <iostream>
#include "Pessoa.cpp"
#include "Agenda.cpp"

using namespace std;

int main(void) {
  char linha[] = "---------------------------------------------\n";
	Agenda a;

	a.armazenaPessoa("Abel", 22, 1.78);
	a.armazenaPessoa(Pessoa("Tiago", 20, 1.80));
	a.imprimePovo();
	cout << linha;

	int posicao = a.buscaPessoa("Tiago");
	if (posicao > 0)
    a.imprimePessoa(posicao);
	cout << linha;

	a.removePessoa("Tiago");
	a.imprimePovo();
	cout << linha;
	
 	return 0;
}
