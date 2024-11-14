#include <iostream>

using namespace std;

int main()
{
  int ans;
  bool LOOP = true;

  do {
    cout << "0: quit | ";
    cout << "1: file | ";
    cout << "2: edit | ";
    cout << "3: help | " << endl;

    cout << "cmd (0,1,2,3): ";
    cin >> ans;
    switch (ans) {
    case 0:
      cout << "quit" << endl;
      LOOP = false;
      break;
    case 1:
        cout << "file" << endl;
      break;
    case 2:
        cout << "edit" << endl;
      break;
    case 3:
        cout << "help" << endl;
      break;
    default:
      cout << "???" << endl;
    }
  } while (LOOP);

  return 0;
}
