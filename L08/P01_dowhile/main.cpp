#include <iostream>

using namespace std;

int main()
{
  //chiedo un numero fino a che non è <= 10

  int numero;

  do {
    cout << "n: ";
    cin >> numero;

  } while (numero > 10);

  cout << "ok" << endl;

  return 0;
}
