#include <iostream>

using namespace std;

int main()
{
  int n = 10 > 2;  //true
  int m = 10 < 2;  //false

  /*
  >
  <
  ==
  >=
  <=
  !=
  */

  cout << "10 > 2: " << n << endl;
  cout << "10 < 2: " << m << endl;
  cout << "10 == 2: " << (10 == 2) << endl;
  cout << "10 != 2: " << (10 != 2) << endl;

  int temp = 10;
  cout << "temp > 18? " << (temp > 18) << endl;
  int x = 10;
  int y = 20;
  cout << "x == y? " << (x == y) << endl;

  /*
  AND -> &&
  OR  -> ||
  NOT -> !
  */
  x = 12;
  int expr1 = (x > 10) && (x < 20);
  cout << "x tra 10 e 20: " << expr1 << endl;
  x = 30;
  expr1 = (x > 10) && (x < 20);
  cout << "x tra 10 e 20: " << expr1 << endl;

  x = 0;
  int expr2 = (x < 10) || (x > 20);
  cout << "x externa a 10 e 20: " << expr2 << endl;

  return 0;
}
