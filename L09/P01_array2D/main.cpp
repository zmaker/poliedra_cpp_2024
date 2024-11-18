#include <iostream>

using namespace std;

int main()
{
  cout << "Array multi-dim" << endl;

  int tabella[4][3]; // [RIGHE][COLONNE]

  int matrice[4][3] = {
    { 1, 2, 3},
    { 4, 5, 6},
    { 7, 8, 9},
    {10,11,12}
  };

  tabella[0][0] = 1;

  for (int r = 0; r < 4; r++) { //scan righe
      for (int c = 0; c < 3; c++) {
          tabella[r][c] = 0;
      }
  }

  for (int r = 0; r < 4; r++) { //scan righe
      //cout << "|";
      for (int c = 0; c < 3; c++) {
          cout << tabella[r][c] << " ";
      }
      cout << endl;
  }
  cout << endl;

  for (int r = 0; r < 4; r++) { //scan righe
      //cout << "|";
      for (int c = 0; c < 3; c++) {
          cout << matrice[r][c] << " ";
      }
      cout << endl;
  }
  cout << endl;

  int nel = sizeof(matrice)/sizeof(int);
  cout << "size: " << sizeof(matrice) << " el:" << nel << endl;

  return 0;
}
