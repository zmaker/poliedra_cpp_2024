#include <iostream>

using namespace std;

int main()
{
  int sum = 0;
  int n = 0;

  cout << "numero: ";
  cin >> n;

  while (cin)
  {
    sum = sum + n;
    cout << "prog: " << sum << endl;
    cout << "numero: ";
    cin >> n;
  }

  cout << "sum: " << sum << endl;

  return 0;
}
