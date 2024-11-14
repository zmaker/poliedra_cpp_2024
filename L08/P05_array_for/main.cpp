#include <iostream>

using namespace std;

int main()
{
    cout << "esempio for e array" << endl;

    int t[5];
    for (int i = 0; i < 5; i++) {
        cout << "temp: ";
        cin >> t[i];
    }
    cout << endl;
    for (int i = 4; i >= 0; i--) {
        cout << "temp: " << t[i] << endl;
    }

    int num[10];
    for (int i = 0; i < 10; i++) {
      cout << i << ": " << num[i] << endl;
    }

    int buff[5] = {0,0,0,0,0};

    int pos[50];
    for (int i = 0; i < 50; i++) {
      pos[i] = 0;
    }

    return 0;
}
