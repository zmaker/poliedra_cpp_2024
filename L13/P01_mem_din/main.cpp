#include <iostream>

using namespace std;

int main()
{
    cout << "Allocazione dinamica memoria" << endl;

    int n = 123;
    int buf[10];

    int *ptr = new int(42);
    cout << "valore puntato " << *ptr << endl;
    cout << "addr " << ptr << endl;
    delete ptr;
    cout << "addr " << ptr << endl;
    ptr = nullptr;
    cout << "addr " << ptr << endl;

    return 0;
}
