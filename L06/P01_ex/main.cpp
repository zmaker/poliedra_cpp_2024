#include <iostream>

using namespace std;

int main()
{
  /*
  Programma che confronta due numeri interi
  */
  int n,m;
  cout << "Primo numero: ";
  cin >> n;

  cout << endl << "Secondo numero: ";
  cin >> m;

  cout << "ho ricevuto i numeri: "  << n << ", " << m << endl;

  if (n > m)
  {
    cout << n << " maggiore di " << m << endl;
  }
  else if (m > n)
  {
    cout << m << " maggiore di " << n << endl;
  } else {
    cout << m << " uguale a " << n << endl;
  }

  cout << "end";

  return 0;
}
