#include <iostream>

using namespace std;

int main()
{
  cout << "centro di controllo" << endl;
  cout << "-------------------" << endl;
  cout << "0 - exit" << endl;
  cout << "1 - copia file" << endl;
  cout << "2 - crea cartella" << endl;
  cout << "3 - help" << endl;
  int cmd;
  cin >> cmd;

  switch ( cmd )
  {
  case 0:
    //codice
    cout << "EXIT; bye bye!" << endl;
    break;
  case 1:
    //codice
    cout << "file copiato da A: a B:" << endl;
    break;
  case 2:
  case 4:
    //codice
    cout << "cartella creata" << endl;
    break;
  case 3:
    //codice
    cout << "0 - exit" << endl;
    cout << "1 - copia file" << endl;
    cout << "2 - crea cartella" << endl;
    cout << "3 - help" << endl;
  break;
  default:
    cout << "???" << endl;
  }

  return 0;
}
