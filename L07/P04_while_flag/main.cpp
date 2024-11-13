#include <iostream>

using namespace std;

int main()
{
    bool continua = true;

    int contatore = 0;

    while (continua)
    {
      cout << "Iter: " << contatore << endl;
      contatore++;

      if (contatore >= 5)
      {
        continua = false;
      }
    }

    cout << "END" << endl;

    return 0;
}
