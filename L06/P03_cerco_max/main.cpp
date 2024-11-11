#include <iostream>

using namespace std;

int main()
{
    cout << "Cerco il max" << endl;

    //variabile per memorizzare il max
    int m = 0;

    for (int i = 0; i < 5; i++)
    {
      cout << "numero " << (i+1) << ": ";
      int n = 0;
      cin >> n;

      if (n > m)
      {
        cout << n << " maggiore di " << m << endl;
        m = n;
      }
    }

    cout << "il max vale: " << m << endl;

    return 0;
}
