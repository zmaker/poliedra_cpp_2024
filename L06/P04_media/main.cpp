#include <iostream>

using namespace std;

const int TOT_NUM = 5;

int main()
{
    cout << "Calcolo media" << endl;

    int somma = 0;
    int n = 0;

    for (int i = 1; i <= TOT_NUM ; i++)
    {
      cout << "numero " << i << ": ";
      cin >> n;
      //somma = somma + n;
      somma += n;
    }

    cout << "somma: " << somma << endl;
    float media = (float)somma / TOT_NUM;
    cout << "media: " << media << endl;

    return 0;
}
