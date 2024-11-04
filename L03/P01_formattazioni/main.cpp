#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "123456789012345678901234567890" << endl;
  cout << setw(10) << "Mario" << endl;
  cout << setw(10) << "Rossi" << endl;
  cout << setfill('_') << endl;
  cout << setw(20) << "Mario" << endl;
  cout << setfill(' ') << endl;
  cout << setw(20) << "Luigi" << endl;

  double x = 123.4556789;
  cout << setprecision(3) << x << endl;
  cout << fixed;
  cout << setprecision(3) << x << endl;
  cout << setprecision(2) << x << endl;
  cout << setprecision(1) << x << endl;

  cout << endl << scientific << x << endl;

  cout << endl << setbase(16) << 234 << endl;
  cout << hex << 234 << endl;
  cout << hex << 123 << endl;
  cout << oct << 123 << endl;
  cout << dec << 123 << endl;

  return 0;
}
