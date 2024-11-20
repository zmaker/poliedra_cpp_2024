#include <iostream>

using namespace std;

int contatore() {
  int c = 0;
  c++;
  return c;
}

int contatore2() {
  static int c = 0;
  c++;
  return c;
}

int main()
{
    cout << "fun static" << endl;

    cout << "C1: " << contatore() << endl;
    cout << "C2: " << contatore() << endl;
    cout << "C3: " << contatore() << endl << endl;

    cout << "C1: " << contatore2() << endl;
    cout << "C2: " << contatore2() << endl;
    cout << "C3: " << contatore2() << endl;

    return 0;
}
