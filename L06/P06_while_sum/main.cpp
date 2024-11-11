#include <iostream>

using namespace std;

int main()
{
  cout << "somma di numeri" << endl;

  int i = 1;
  int n = 0;
  int somma = 0;

  while (i <= 5)
  {
    cout << "numero " << i << ": ";
    cin >> n;
    somma += n;
    i++;
  }

  cout << "somma: " << somma << endl;


  return 0;
}
