#include <iostream>

using namespace std;

void f(int n){
  if (n <= 1) {
    cout << 1 << endl;
  } else {
    cout << n << " ";
    f(n-1);
  }
}

int s(int n){
  if (n <= 1) {
    return 1;
  } else {
    return (n + s(n-1));
  }
}

int fib(int i){
  if (i == 0){
    return 0;
  } else if (i == 1) {
    return 1;
  } else {
    return fib(i-1) + fib(i-2);
  }
}

int main()
{
    cout << "esempio ricorsione" << endl;

    int n = 10;
    f(n);

    int ans = s(n);
    cout << "ans: " << ans << endl;

    //fibonacci
    // fib(0) = 0
    // fib(1) = 1
    // fib(2) = 1
    // fib(i) = fib(i-1) + fib(i-2)

    // i = 3
    // fib(3) = fib(3-1) + fib(3-2) = fib(2) +fib(1) = 2

    cout << "fibonacci di " << n << ": " << fib(n) << endl;
    for (int i = 0; i < n; i++) {
      cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}
