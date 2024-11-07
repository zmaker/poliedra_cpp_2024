#include <iostream>

using namespace std;

int main()
{
    cout << "abs()" << endl;
    cout << "numero: ";
    int n;
    cin >> n;
    cout << endl;

    int ans = n;
    //SE il numero n è negativo "lo giro"
    if (n < 0)
    {
        n = -n;
    }

    cout << "abs(" << ans << ") = " << n << endl;

    return 0;
}
