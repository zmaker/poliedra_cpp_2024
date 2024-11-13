#include <iostream>

using namespace std;

int main()
{
  //stampo 10 numeri
  int i = 0;
  while (i < 10)
  {
    cout << i << " ";
    i++;
  }

  char ch = '\0';
  cout << endl << "premi q per terminare" << endl;
  while ( (ch = cin.get()) != 'q' );
  cout << "ok" << endl;

  return 0;
}
