#include <iostream>

using namespace std;

int main()
{
  char s1[25];
  char s2[25];

  cout << "s1: ";
  cin.getline(s1, 25);

  cout << "s2: ";
  cin.getline(s2, 25);

  cout << s1 << " ";
  cout << s2 << endl;
  return 0;
}
