#include <iostream>

using namespace std;

int main()
{
    for ( int i=0 ; i < 10 ; i++ )
    {
      //codice da ripetere
      cout << i << " ";
    }
    cout << endl;

    int j = 0;
    for ( j=1 ; j <= 10 ; j++ )
    {
      cout << j << " ";
    }
    cout << endl;

    //conteggio all'indietro
    for (int i=10 ; i >= 1 ; i-- )
    {
      cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
      cout << (10-i) << " ";
    }
    cout << endl;

    //step > 1
    for ( int i = 0; i < 10; i = i + 2)
    {
      cout << i << " ";
    }
    cout << endl;

    //pari e dispari
    for (int i = 0; i < 10; i++)
    {
      int r = i%2;
      cout << i << ( r==0 ? "P " : "D " );
      /*if (r == 0)
      {
        cout << "P ";
      }
      else
      {
        cout << "D ";
      }
      */
    }
    cout << endl;


    return 0;
}
