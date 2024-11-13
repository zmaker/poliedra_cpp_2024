#include <iostream>

using namespace std;

int main()
{
    cout << "Calcolo media" << endl;

    int n = 0; //numero di ripetizioni
    int somma = 0;
    int numero = 0;

    cout << "Quanti voti? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      cout << "numero " << i << ": ";
      cin >> numero;
      somma += numero;
    }

    //for (;;) {};  //for infinito

    double media = (double)somma / n;

    cout << "somma: " << somma << endl;
    cout << "media: " << media << endl;

    return 0;
}
