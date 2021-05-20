#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

struct StoreItem {
  unsigned int ID;
  char name[50];
  unsigned int quantity;
  double value;
};

struct StoreItem itemsList[8] {
  {3, "Lixadeira", 7, 57.98},
  {17, "Martelo", 76, 11.99},
  {24, "SerraTico-tico", 21, 11.0},
  {39, "CortadorDeGrama", 3, 79.5},
  {56, "SerraEletrica", 18, 99.99},
  {68, "ChaveDeFenda", 106, 6.99},
  {77, "Marreta", 11, 21.5},
  {83, "ChaveInglesa", 34, 7.5}
};

void saveStoreItems(fstream &file, unsigned long &size);
void printStoreItems(fstream &file);
void printItem(fstream &file, unsigned int ID);
void addItem(fstream &file, unsigned long &size, struct StoreItem &item);
void removeItem(fstream &file, unsigned int ID);
void modifyItem(fstream &file, struct StoreItem &item);

int main(void) {
  fstream fileIO("hardware.dat", ios::in | ios::out);
  //fstream fileIO("hardware.dat", ios::out);

  if (!fileIO)
    (cout << "Erro em carregar arquivo." << endl, exit(1));

  unsigned long size = sizeof(itemsList) / sizeof(struct StoreItem);
  
  //saveStoreItems(fileIO, size);

  while (1) {
    cout << "Selecione uma operacao: " << endl;
    cout << "0 - Listar todos os items." << endl;
    cout << "1 - Mostrar detalhes de um item." << endl;
    cout << "2 - Adicionar item." << endl;
    cout << "3 - Remover item." << endl;
    cout << "4 - Alterar dados de um item." << endl;
    cout << "5 - Encerrar programa." << endl << endl;
    cout << "Digite o numero correspondente: ";
    
    unsigned int op;
    cin >> op;
    cout << endl;

    unsigned int ID;
    struct StoreItem item;
    switch (op) {
      case 0:
        printStoreItems(fileIO);
        break;
      case 1:
        cout << "Digite o numero de registro do item: ";
        cin >> ID;
        cout << endl;
        printItem(fileIO, ID);
        break;
      case 2:
        cout << "Digite um numero para registrar o item: ";
        cin >> item.ID;
        cout << "Digite o nome do item: ";
        cin >> item.name;
        cout << "Digite a quantidade em estoque: ";
        cin >> item.quantity;
        cout << "Digite o valor do item: ";
        cin >> item.value;
        cout << endl;
        addItem(fileIO, size, item);
        break;
      case 3:
        cout << "Digite o numero de registro do item: ";
        cin >> ID;
        removeItem(fileIO, ID);
        break;
      case 4:
        cout << "Digite um numero para alterar o item: ";
        cin >> item.ID;
        cout << "Digite um novo nome para o item: ";
        cin >> item.name;
        cout << "Digite a quantidade em estoque: ";
        cin >> item.quantity;
        cout << "Digite o valor do item: ";
        cin >> item.value;
        cout << endl;
        modifyItem(fileIO, item);
        break;
      case 5:
        (cout << "Programa encerrado." << endl, exit(1));
      default:
        (cout << "Operacao invalida, programa encerrado." << endl, exit(1));
        break;
    }
  }

  fileIO.close();

  return 0;
}

void saveStoreItems(fstream &file, unsigned long &size) {
  file.seekp(0);
  for (int i = 0; i < size; i++)
    file.write(reinterpret_cast<char *> (&itemsList[i]), sizeof(itemsList[i]));
  file.flush();

  return;
}

void printStoreItems(fstream &file) {
  struct StoreItem item;

  file.clear();
  file.seekg(0);

  while (1) {
    file.read(reinterpret_cast<char *> (&item), sizeof(item));
    if (file.eof())
      break;
    if (item.ID != 0)
      cout << item.ID << ' ' << item.name << ' ' << item.quantity << ' ' << fixed << setprecision(2) << item.value << endl;
  }
  cout << endl;

  return;
}

void printItem(fstream &file, unsigned int ID) {
  struct StoreItem item;
    
  file.clear();
  file.seekg(0);

  while (1) {
    file.read(reinterpret_cast<char *> (&item), sizeof(item));
    if (file.eof())
      break;    
    if (item.ID == ID) {
      cout << item.ID << ' ' << item.name << ' ' << item.quantity << ' ' << item.value << endl << endl;
      return;
    }
  }

  cout << "Item nao encontrado. Tente novamente." << endl;
}

void addItem(fstream &file, unsigned long &size, struct StoreItem &item) {
  struct StoreItem newItem;
  
  if (size >= 100)
    (cout << "Quantidade de itens cadastrado no limite. Programa encerrado.", exit(1));
  
  file.clear();
  file.seekg(0);

  int counter (0);
  while (1) {
    file.read(reinterpret_cast<char *> (&newItem), sizeof(newItem));
    if (newItem.ID == 0 || file.eof()) {
      cout << newItem.ID << " - " << counter << endl;
      file.clear();
      file.seekg(counter * sizeof(newItem));
      break;
    }
    counter ++;
  }

  file.seekp(++counter * sizeof(newItem));
  file.write(reinterpret_cast<char *> (&item), sizeof(item));
  file.flush();

  return;
}

void removeItem(fstream &file, unsigned int ID) {
  struct StoreItem item;
  file.clear();
  file.seekg(0);

  while (1) {
    file.read(reinterpret_cast<char *> (&item), sizeof(item));
    if (file.eof())
      break;
    if (item.ID == ID) {
      item.ID = 0; 
      file.write(reinterpret_cast<char *> (&item), sizeof(item));
      break;
    }
  }

  file.flush();

  return;
}

void modifyItem(fstream &file, struct StoreItem &item) {
  struct StoreItem thisItem;
  file.clear();
  file.seekg(0);

  while (1) {
    file.read(reinterpret_cast<char *> (&thisItem), sizeof(item));
    if (file.eof())
      break;
    if (thisItem.ID == item.ID)
      file.write(reinterpret_cast<char *> (&item), sizeof(item));
  }

  file.flush();

  return;
}
