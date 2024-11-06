#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;

  cout << "lettura 3 numeri interi: " << endl;
  cout << "numero 1: ";
  cin >> a;
  cin.clear();
  cin.ignore(80, '\n');
  cout << "a: " << a << endl;

  cout << "numero 2: ";
  cin >> b;
  cin.clear();
  cin.ignore(80, '\n');
  cout << "b: " << b << endl;

  cout << "numero 3: ";
  cin >> c;
  cin.clear();
  cin.ignore(80, '\n');
  cout << "c: " << c << endl;


  return 0;
}
