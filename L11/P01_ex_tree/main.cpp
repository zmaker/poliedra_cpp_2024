#include <iostream>

#define DEBUG 0

using namespace std;

void riga (int n, int s) {
  for (int i = 0; i < s; i++){
    cout << " ";
  }

  for (int i = 0; i < n; i++){
    cout << "* ";
  }
  cout << endl;
}

int main()
{
    #if (DEBUG == 1)
    cout << "PROG IN DEBUG" << endl;
    #endif

    cout << "Char tree" << endl;
    // 1 |--*    s:2
    // 2 |-* *   s:1
    // 3 |* * *  s:0

    int righe;

    cout << "quante righe vuoi? ";
    cin >> righe;

    if (righe < 0) righe = 0;
    if (righe >= 20) righe = 20;

    for (int i = 1; i <= righe; i++) {
      int spazi = righe-i;
      #if (DEBUG == 1)
      cout << i << " " << spazi << endl;
      #endif
      riga(i, spazi);
    }

    return 0;
}
