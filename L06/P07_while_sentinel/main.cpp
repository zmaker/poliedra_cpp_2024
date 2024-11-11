#include <iostream>

using namespace std;

int main()
{
    cout << "Somma numeri (0 per finire)" << endl;
    int somma = 0;
    int n = 0;
    int i = 1;

    cout << "numero (" << i << "): ";
    cin >> n;
    somma += n;
    i++;

    // while con sentinella

    while (n != 0)
    {
      cout << "numero (" << i << "): ";
      cin >> n;
      somma += n;
      i++;
    }

    cout << "somma: " << somma << endl;

    return 0;
}
