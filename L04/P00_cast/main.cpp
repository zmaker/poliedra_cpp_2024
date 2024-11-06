#include <iostream>

using namespace std;

int main()
{
    int x;
    float y;

    y = 5.5;

    cout << "y: " << y << endl;
    x = y;
    cout << "x: " << x << endl;

    float z;
    z = x;
    cout << "z: " << z << endl;

    int n = 10;
    int d = 3;
    float q = n/d;
    cout << "q sbagliato: " << q << endl;

    q = (float)n / (float)d;
    cout << "q2 : " << q << endl;

    q = (float)n / d;
    cout << "q3 : " << q << endl;

    q = static_cast<float>(n) / d;
    cout << "q4 : " << q << endl;

    return 0;
}
