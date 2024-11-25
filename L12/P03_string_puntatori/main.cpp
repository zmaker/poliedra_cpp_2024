#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void toUp(string *ps) {

}

int main()
{
    cout << "string e puntatori" << endl;

    string str = "hello world!";
    cout << "str: " << str << endl;

    toUp(str);

    cout << "str: " << str << endl;

    return 0;
}
