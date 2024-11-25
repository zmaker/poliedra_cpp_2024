#include <iostream>

using namespace std;

void raddoppia(int *pa, int n_celle) {
  for (int i = 0; i < n_celle; i++) {
    //pa[i] *= 2; //versione compatta
    pa[i] = pa[i] * 2;
    //cout << pa[i] << " ";
  }
  cout << endl;
}

void prta(int *pa, int n_celle) {
  for (int i = 0; i < n_celle; i++) {
    cout << pa[i] << " ";
  }
  cout << endl;
}

int main()
{
    cout << "Esempio array e fun" << endl;

    int numeri[] = {1,2,3,4,5,6};
    int size_array = sizeof(numeri) / sizeof(int);

    prta(numeri, size_array);
    raddoppia(numeri, size_array);
    prta(numeri, size_array);

    return 0;
}
