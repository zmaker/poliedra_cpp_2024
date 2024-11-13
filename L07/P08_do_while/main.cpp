#include <iostream>

using namespace std;

int main()
{
  int s, n;

  /*
  do {

  } while ();
  */

  do {
    cout << "n (0 per finire): ";
    cin >> n;
    s += n;
    cout << "p: " << s << endl;
  } while (n != 0);

  cout << "s: " << s << endl;

  return 0;
}
