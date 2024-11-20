#include <iostream>

using namespace std;

int g = 0;

void aumenta(){
  int g = 0;
  g++;
}

void aumenta2(){
  extern int g;
  g++;
}

int main()
{
  cout << "extern" << endl;

  cout << "g: " << g << endl;
  aumenta();
  cout << "g: " << g << endl;

  cout << "g: " << g << endl;
  aumenta2();
  cout << "g: " << g << endl;


  return 0;
}
