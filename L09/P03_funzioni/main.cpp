#include <iostream>

using namespace std;

/*
 funzione quadrato
 restiruisce il quadrato di un numero
 param: n - valore da elevare al quadrato
*/
int quadrato (int n) {
  //codice della funzione
  int q = 0;
  q = n * n;
  return q;
}

int main()
{
    cout << "funzioni" << endl;
    cout << "quadrato di 2: " << quadrato(2) << endl;
    int num = 10;
    int q = quadrato(num);
    cout << "quadrato di 10: " << q << endl;
    cout << "num: " << num << endl;

    return 0;
}
