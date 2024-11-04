#include <iostream>

using namespace std;

int main()
{
    int x;
    float y = 5.5;

    x = y;
    cout << "y: " << y << endl;
    cout << "x: " << x << endl;

    short m;
    long n;
    cout << "size short : " << sizeof(m) << endl;
    cout << "size long  : " << sizeof(n) << endl;

    m = 123;
    n = m;
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;

    return 0;
}
