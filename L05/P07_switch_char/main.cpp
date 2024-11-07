#include <iostream>

using namespace std;

int main()
{
  cout << "centro di controllo" << endl;
  cout << "-------------------" << endl;
  cout << "q - exit" << endl;
  cout << "c - copia file" << endl;
  cout << "f - crea cartella" << endl;
  cout << "h - help" << endl;
  char cmd;
  cin >> cmd;

  switch ( cmd )
  {
  case 'q':
  case 'x':
    //codice
    cout << "EXIT; bye bye!" << endl;
    break;
  case 'c':
    //codice
    cout << "file copiato da A: a B:" << endl;
    break;
  case 'f':
  case 'g':
    //codice
    cout << "cartella creata" << endl;
    break;
  case 'h':
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
