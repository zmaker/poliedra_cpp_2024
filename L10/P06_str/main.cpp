#include <iostream>
#include <string>

using namespace std;

void saluto(char nome[]){
  cout << "ciao, " << nome << endl;
}

void saluto2(string str){
  cout << "Buongiorno, " << str << endl;
}

int main()
{
  cout << "passaggio char array" << endl;

  saluto("Mario");
  saluto2("Luigi");

  return 0;
}
