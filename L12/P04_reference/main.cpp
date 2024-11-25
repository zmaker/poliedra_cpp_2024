#include <iostream>
#include <string>

using namespace std;

//esempio con reference
void incrementa(int &num){
  num++;
}

//esempio con puntatori
void incrementa2(int *p) {
  (*p)++;
}

void prt(const string &str){
  cout << str << endl;
}

void prta(const int (&arr)[6] ) {
  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
    cout << "Reference" << endl;

    int x = 0;
    int &refx = x;

    cout << "x: " << x << endl;
    cout << "x: " << refx << endl;

    refx = 20;
    cout << "x: " << x << endl;
    cout << "x: " << refx << endl;

    int y = 100;
    cout << "y: " << y << endl;
    incrementa(y);
    cout << "y: " << y << endl;
    incrementa(y);
    cout << "y: " << y << endl;

    incrementa2(&y);
    cout << "y: " << y << endl;

    string str = "hello!";
    cout << "size str: " << sizeof(str) << endl;
    prt(str);

    int numeri[] = {1,2,3,4,5,6};
    prta(numeri);

    return 0;
}
