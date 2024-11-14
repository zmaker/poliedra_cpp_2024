#include <iostream>

using namespace std;

int main()
{
    cout << "Fibonacci" << endl;
    int n = 0;

    cout << "posizione (>=0):";
    cin >> n;

    if (n == 0)
    {
      cout << "F(" << n << ") = " << 0 << endl;
      return 0;
    }
    if (n == 1)
    {
      cout << "F(" << n << ") = " << 1 << endl;
      return 0;
    }
    else
    {
      //0 1 1 2 3 5 8 ...
      int t1 = 0;
      int t2 = 1;
      int nextterm = 0;
      int fibo = 0;

      for (int i = 1; i < n; i++)
      {
        nextterm = t1 + t2;
        fibo = nextterm;
        //cout << nextterm << endl;
        t1 = t2;
        t2 = nextterm;
      }
      cout << "F(" << n << ") = " << fibo << endl;
    }
    return 0;
}
