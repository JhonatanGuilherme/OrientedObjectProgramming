#include <iostream>

using namespace std;

/*
  Introdução à Orientação a Objetos

  Atributos e comportamentos;

  A linguagem C é procedural, ou seja, orientadas para ação;
  A unidade de programação é a função;
  
  Em C++, a unidade de programação é a classe, a partir da qual
  os objetos são instanciados;

  Cada classe contém:
    Dados (atributos ou membros de dados);
    Funções (funções-membro ou métodos);
  
  Classes podem se relacionar com outras classes -> Associações;
  Grupos de classes relacionadas -> Componentes;
  Classes e componentes são reutilizáveis;

  Encapsulamento
    É o mesmo que ocultar, esconder detalhes;
    Permite ocultar os atributos e a implementação dos métodos de outros
    objetos;
    Objetos podem se comunicar com outros por meio de interfaces bem
    definidas;

  Herança
    Quando um objeto herda característica de outro e adiciona 
    características únicas;
  
  Análise e Projeto
    Análise consiste em identificar os requisitos para chegar o sistema
    deve fazer;
    Projeto consiste em determinar como fazer para atender os requisitos;
    
    Análise e projeto normalmente são guiados por meio de um processo de
    software;

  A linguagem UML (Unified Modeling Language) é comumente utilizada em
  processos de software para modelar, por meio de diagrama, sistemas
  Orientados a Objeto;

  Quando um método é invocada diz-se que uma mensagem foi enviada para o
  objeto, isto é, foi solicitado um serviço de um objeto;

  Métodos set são usados para configurar um valor a um atributo:
    alterar o estado do objeto;
  Métodos get são usados para consultar o valor de um atributo:
    não alteram o estado do objeto;
*/

class Car {
  public:
    Car(string brand);
    string getBrand(void);
    void setBrand(string brand);
    void displayMessage(void);
    void displayMessage(string brand);
    static void testFunction(void);
  private:
    string brand;
};

Car::Car(string brand) {
  setBrand(brand);
}

string Car::getBrand(void) {
  return this->brand;
}

void Car::setBrand(string brand) {
  if (brand == "")
    this->brand = "Unknown";
  else if (brand.length() > 10)
    this->brand = brand.substr(0, 10);
  else
    this->brand = brand;
}

void Car::displayMessage(void) {
  cout << "This is a common car." << endl;
}

void Car::displayMessage(string brand) {
  cout << "This is a " << brand << " car." << endl;
}

void Car::testFunction(void) {
  cout << "This is a test function." << endl;
}

int main(void) {
  Car myCar("Renault");
  myCar.displayMessage();
  myCar.displayMessage("Renault");
  myCar.setBrand("Renault");
  cout << myCar.getBrand() << endl;

  Car::testFunction();

  return 0;
}
