#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void toup(string *ps){
  for (int i = 0; i < (*ps).size(); i++) {
    (*ps)[i] = toupper((*ps)[i]);
  }
}

void tolow(string &str){
  for (int i = 0; i < str.size(); i++) {
    str[i] = tolower(str[i]);
  }
}

int main()
{
  cout << "Hello world!" << endl;

  string str = "hello world!";
  cout << "str: " << str << endl;
  toup(&str);
  cout << "str: " << str << endl;
  tolow(str);
  cout << "str: " << str << endl;
  return 0;
}
