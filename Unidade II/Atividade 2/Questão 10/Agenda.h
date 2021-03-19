#ifndef AGENDA_H
#define AGENDA_H

using namespace std;

class Agenda{
  public:
    Agenda(int tPessoas = 1);
    ~Agenda(void);
    void armazenaPessoa(string nome, int idade, float altura);
    void armazenaPessoa(const Pessoa &p);

    void removePessoa(string nome);

    int buscaPessoa(string nome) const;
    void imprimePovo(void) const;
    void imprimePessoa(int i) const;
  private:
    Pessoa *pessoas;
    int qtdePessoas;
    unsigned int contador {0};
};

#endif //AGENDA_H