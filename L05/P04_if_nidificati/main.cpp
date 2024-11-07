#include <iostream>

using namespace std;

int main()
{
    cout << "Controllo Pianta" << endl;
    cout << "----------------" << endl;

    int temp = 0;
    int hum = 0;

    cout << "temp. (0..50): ";
    cin >> temp;
    cout << endl;
    cout << "umid.(0..100): ";
    cin >> hum;
    cout << endl;

    if (temp > 25)
    {
      cout << "CALDO" << endl;
      if (hum < 20)
      {
        cout << "IRRIGAZIONE" << endl;
      }
    }
    else

    {
      cout << "FREDDO" << endl;
      if (hum < 10)
      {
        cout << "IRRIGAZIONE" << endl;
      }
    }
    return 0;
}
