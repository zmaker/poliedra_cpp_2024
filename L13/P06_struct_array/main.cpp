#include <iostream>

using namespace std;

struct studente {
  string nome;
  string cognome;
  int codice;
};

int main()
{
  //int buff[10];
  studente studenti[3];
  for (int i = 0; i < 3; i++) {
    cout << "nome: ";
    cin >> studenti[i].nome;
    cout << "cognome: ";
    cin >> studenti[i].cognome;
    cout << "codice: ";
    cin >> studenti[i].codice;
  }

  for (int i = 0; i < 3; i++) {
    cout << "(" << studenti[i].codice << ") " << studenti[i].nome << ", " << studenti[i].cognome << endl;
  }

  return 0;
}
