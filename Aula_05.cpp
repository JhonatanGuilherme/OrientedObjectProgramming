#include <iostream>
#include <string>

using namespace std;

int main() {
  /*
  Strings C++
    Sequência de caracteres de tamanho variável;
    Faz parte da biblioteca padrão (std);

  */

  string s1;
  string s2(s1);
  s2 = s1;
  string s3("texto");
  s3 = "texto";
  string s4(5, 'c');
  cout << s3 << endl;
  cout << s4 << endl;
  //cin >> s3; // Recebe caracteres até o primeiro espaço;
  getline(cin, s3); // Recebe caracteres até o Enter;
  cout << s3 << endl;

  /*
  Biblioteca String
    Usando as operações/métodos empty e size;
    É possível comparar objetos string. Todos os operadores relacionais são válidos;
    Strings
  */
  if (s3.empty())
    cout << "String vazia" << endl;
  else
    cout << "tamanho do s1 " << s3.size() << endl;
  
  if (s2 == s3) // Comparação de strings
    cout << "s2 eh igual a s3" << endl;
  else if (s1 < s2)
    cout << s2 << s1 << endl;
  
  s1 += "outro texto"; // Concatenação de strings

  for (auto &c : s1)
    cout << c << endl;

  return 0;
}
