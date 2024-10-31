#include <iostream>

using namespace std;

int main()
{
  int codice;

  cout << "Inserire il codice: ";
  cin >> codice;
  cout << endl;

  cout << "cod: " << codice << endl;

  int stanza;
  int piano;
  cout << "Inserire piano e n.stanza (separati da uno spazio): ";
  cin >> piano >> stanza;
  cout << endl;
  cout << "piano: " << piano << endl;
  cout << "stanza: " << stanza << endl;

  return 0;
}
