#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void toUp(string *ps) {

  for (int i = 0; i < (*ps).size(); i++) {
    (*ps)[i] = toupper((*ps)[i]);
  }
}

int main()
{
    cout << "string e puntatori" << endl;

    string str = "hello world!";
    cout << "str: " << str << endl;

    toUp(&str);

    cout << "str: " << str << endl;

    return 0;
}
