#include <iostream>

using namespace std;

int larger(int a, int b) {
  if (a >= b) return a;
  else return b;
}

int main()
{
    cout << "confronta num" << endl;
    cout << "num 1: ";
    int n = 0;
    cin >> n;

    cout << "num 2: ";
    int m = 0;
    cin >> m;

    cout << "il maggiore è: " << larger(n, m) << endl;

    return 0;
}
