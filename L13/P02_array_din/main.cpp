#include <iostream>

using namespace std;

int main()
{
    cout << "Array dinamici" << endl;
    int n; //dim array
    cout << "Quanti numeri: ";
    cin >> n;

    double *buff = new double[n];

    cout << "inserimento numeri: " << endl;
    for (int i = 0; i < n; i++){
      cout << (i+1) << ": ";
      cin >> buff[i];
    }

    double somma = 0.0;
    for (int i = 0; i < n; i++){
      somma += buff[i];
    }

    cout << "somma: " << somma << endl;

    delete[] buff;

    return 0;
}
