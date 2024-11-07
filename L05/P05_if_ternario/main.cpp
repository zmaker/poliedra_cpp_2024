#include <iostream>

using namespace std;

int main()
{
    int a = 30;
    int b = 20;

    int max = 0;

    if (a > b)
    {
      max = a;
    }
    else
    {
      max = b;
    }

    //if ternario: ( expr ? codice_true : codice_false )

    cout << "a: " << a << " b: " << b << endl;

    int max2 = ( a>b ? a : b );
    cout << "max: " << max2 << endl;

    int n = -1;
    cout << "n: " << n << endl;
    int abs = ( n>0 ? n : -n );
    cout << "abs " << abs << endl;

    return 0;
}
