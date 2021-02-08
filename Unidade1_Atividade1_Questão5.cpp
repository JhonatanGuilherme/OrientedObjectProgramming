#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float nota1, nota2, nota3, media;
  string nome;
  cin >> nome >> nota1 >> nota2 >> nota3;
  media = (nota1 * 3 + nota2 * 4 + nota3 * 5) / 12;
  cout << fixed << setprecision(1);
  cout << "O aluno " << nome << " obteve media " << media << endl;

  return 0;
}
