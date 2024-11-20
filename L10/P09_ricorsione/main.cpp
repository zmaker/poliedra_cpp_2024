#include <iostream>

using namespace std;

int fatt(int n) {
  if (n == 1) {
    //caso base
    return 1;
  } else {
    return n * fatt (n-1);
  }
}

int main()
{
    cout << "Fattoriale" << endl;

    // 5! = 5 x 4 x 3 x 2 x 1

    //1! = 1

    cout << "F(1)= " << fatt(1) << endl;
    cout << "F(3)= " << fatt(3) << endl;

    return 0;
}
