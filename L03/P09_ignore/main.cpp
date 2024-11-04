#include <iostream>

using namespace std;

int n = 0;
char s[25];
const int ripetizioni = 10;
#define N_NEPERO 2.7
#define PI_GRECO 3.14

int main()
{
  cout << "numero: ";
  cin >> n;
  cin.ignore(80, '\n');
  cout << "nome  : ";

  cin.getline(s, 25);
  cout << "n: " << n << " nome: " << s << endl;
  cout << ripetizioni << endl;
  cout << "PI: " << PI_GRECO << endl;

  return 0;
}
