/*
  >> Fundamentos de C++;

    C++ => Superconjunto de C;
  
  > Introdução
    C foi desenvolvida Dennis Ritchie;
    C + Object-Oriented = C++; // De forma geral;

    Orientação a Objetos (OO) - Objetos são essencialmente componentes de software reutilizáveis
    que modelam itens do mundo real (Deitel);
    > Pilares:
      * Abstração;
      * Encapsulamento; (private)
      * Herança;
      * Polimorfismo;

    C++ foi criada por Bjarne Stroustrup;
  
    > Paradigmas
      > Conceito: define a forma (e os recursos) para se resolver um problema;
      > Exemplos:
        * Não Estruturado; (GoTo)
        * Estruturado;
        * Orientado a Objetos;
        * Funcional;
        * ...; 
*/

//#include <istream> // Entrada de dados; (cin)
//#include <ostream> // Saíde de dados; (cout (+ cerr e clog))

#include <iostream> // Junção das duas bibliotecas acima;

// 'Namespace' - espaço de nomes. std é o namespace de toda biblioteca padrão do C++;

/*
  > Tipos primitivos:
    bool -------- boolean --------------------------- NA;
    char -------- character ------------------------- 8 bits;
    wchar_t ----- wide character -------------------- 16 bits;
    char16_t ---- Unicode character ----------------- 16 bits;
    char32_t ---- Unicode character ----------------- 32 bits;
    short ------- short integer --------------------- 16 bits;
    int --------- integer --------------------------- 16 bits;
    long -------- long integer ---------------------- 32 bits;
    long long --- long integer ---------------------- 64 bits;
    float ------- single-precision floating-point --- 6 significant digits;
    double ------ double-precision floating-point --- 10 significant digits;
    long double - extended-precision floating-point - 10 significant digits;
*/

extern int teste; // Indicando que a variável foi criada em outro arquivo;

int main() {
  //std::cout << teste << std::endl;
  std::cout << "Digite 2 numeros: "; // '<<' = operador de bitwise sobrecarregado - envia o fluxo para saída;
  int n1 = 0, n2 = 0;

  std::cin >> n1 >> n2;

  std::cout << "Soma de " << n1 << " mais " << n2 << " eh: " << n1 + n2 << std::endl;

  // Tipos primitivos em bytes:
  std::cout << "Tamanho em bytes: " << std::endl;
  std::cout << "bool............: " << sizeof(bool) << std::endl;
  std::cout << "char............: " << sizeof(char) << std::endl;
  std::cout << "short...........: " << sizeof(short) << std::endl;
  std::cout << "int.............: " << sizeof(int) << std::endl;
  std::cout << "long............: " << sizeof(long) << std::endl;
  std::cout << "long long.......: " << sizeof(long long) << std::endl;
  std::cout << "float...........: " << sizeof(float) << std::endl;
  std::cout << "float...........: " << sizeof(float) << std::endl;
  std::cout << "double..........: " << sizeof(double) << std::endl;
  std::cout << "long double.....: " << sizeof(long double) << std::endl;

  // > Constantes literais:
  // Inteiro:
  std::cout << 20 << std::endl; // Em decimal;
  std::cout << 024 << std::endl; // Em octal;
  std::cout << 0x14 << std::endl; // Em hexadecimal;

  // Ponto flutuante:
  std::cout << 3.1415 << std::endl;
  std::cout << 3.1415e0 << std::endl;
  std::cout << 3.1415E0 << std::endl;
  std::cout << 0. << std::endl;
  std::cout << .0 << std::endl;
  std::cout << "faltou algo aqui" << std::endl;

  // Caractere e strings (C-style)
  std::cout << 'a' << std::endl;
  std::cout << "uma string qualquer" << std::endl;

  // Caracteres de escape
  std::cout << "new\nline" << std::endl;
  std::cout << "vertical\vtab" << std::endl;
  std::cout << "back\\slash" << std::endl;
  std::cout << "carriage\rreturn" << std::endl;
  std::cout << "horizontal\ttab" << std::endl;
  std::cout << "back\bspace" << std::endl;
  std::cout << "question\?mark" << std::endl;
  std::cout << "form\rfeed" << std::endl;
  std::cout << "alert\a" << std::endl;
  std::cout << "double\"quote" << std::endl;
  std::cout << "single\'quote" << std::endl;

  // Strings literais:
  // u - Unicode 16 character;
  // U - Unicode 32 character;
  // L - wide character;
  // u8 - utf-8 (string literals only);

  // Integer literais:
  // u or U - unsigned;
  // l or L - long;
  // ll or LL - long long;

  // Floating-Point literais:
  // f or F - float;
  // l or L - long double;

  std::cout << 10u << std::endl; // unsigned integer;
  std::cout << 10l << std::endl; // long integer;
  std::cout << 10LL << std::endl; // long long integer;

  std::cout << 10.0f << std::endl; // float;
  std::cout << 10.0L << std::endl; // long double;

  // Booleano:
  bool teste = true;

  // Formas de inicialização:
  int num1 = 0;
  int num2 = {0};
  int num3{0};
  int num4(0);

  // Definição X Declaração:
  // Definição: cria a variável/objeto;
  // Declaração: comunica a existência da variável/objeto em outros arquivos;

  // Convenções úteis:
  // * um identificador deve indicar o seu significado;
  // * nomes de variáveis normalmente em minúsculas;
  // * classes começam com maiúsculas;
  // * identificadores de muitas palavras devem ser visualmente distinguíveis;

  return 0;
}
