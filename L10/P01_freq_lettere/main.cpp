#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
  setlocale(LC_ALL, "");
  cout << "Conteggio caratteri" << endl;

  /*
  for (int i = 0; i < 26; i++) {
    cout << (char)('a'+i) << " val: " << (int)('a'+i) << endl ;
  }
  */

  char msg[] = "nel mezzo del cammin di nostra vita mi ritrovai per una selva";

  int dict[26];
  for (int i = 0; i < 26; i++) dict[i] = 0;

  for (int i = 0; i < strlen(msg); i++) {
    char ch = msg[i];
    int posizione = ((int)ch) - 97;
    dict[posizione]++;
  }

  for (int i = 0; i < 26; i++) {
    cout << (char)('a'+i) << " freq: " << dict[i] << endl ;
  }


  return 0;
}
