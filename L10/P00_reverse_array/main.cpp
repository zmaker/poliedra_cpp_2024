#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "");
  cout << "Reverse Array" << endl;

  int n[] = {1,2,3,4,5,6};

  int maxidx = sizeof(n)/ sizeof(int);
  cout << "n.el:  " << maxidx << endl;

  for (int i = 0; i < maxidx; i++) {
    cout << n[i] << " ";
  }
  cout << endl;

  int passi = maxidx / 2;
  cout << "passi: " << passi << endl;
  int temp;

  for (int i = 0; i < passi; i++) {
    temp = n[i];
    int j = (maxidx-1)-i;
    n[i] = n[j];
    n[j] = temp;
  }

  for (int i = 0; i < maxidx; i++) {
    cout << n[i] << " ";
  }
  cout << endl;

  return 0;
}
