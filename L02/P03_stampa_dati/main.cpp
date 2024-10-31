#include <iostream>
#include <string>

using namespace std;

int main()
{
  //dati persona
  int codice;
  string nome;
  float peso;
  float altezza;

  codice = 123;
  cout << "codice: " << codice << endl;

  nome = "Mario Rossi";
  cout << endl << "nome:\t\t\"" << nome << "\"" << endl;

  peso = 78.3;
  altezza = 1.87;
  cout << "peso:\t\t" << peso << " Kg.\n";
  cout << "altezza:\t" << altezza << " m." << endl;

  return 0;
}
