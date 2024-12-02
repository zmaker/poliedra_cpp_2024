#include <iostream>

using namespace std;

int tab(int n){
  for (int i = 0; i < n ;i++) {
    cout << "-";
  }
  cout << endl;
}

int tab(void){
  cout << "-";
  cout << endl;
}

int main()
{
    cout << "Overloading" << endl;

    tab(3);
    tab(5);
    tab();

    return 0;
}
