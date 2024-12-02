#include <iostream>

using namespace std;

class Calc{

public:

  void molt(int a, int b);
  void molt(double a, double b);
  void molt(double a, int b);
  void molt(float a, float b);

};

void Calc::molt(int a, int b){
  cout << a*b << endl;
}

void Calc::molt(double a, double b){
  cout << "d:"<< a*b << endl;
}

void Calc::molt(double a, int b){
  cout << a*b << endl;
}

void Calc::molt(float a, float b){
  cout << "f:" << a*b << endl;
}

int main()
{
    cout << "Calc" << endl;
    Calc c;
    cout << "m1: ";
    c.molt(10,20);
    cout << "m2: ";
    c.molt(10.5,2.5);
    c.molt(10.3, (double)2);
    //c.molt(10.3, 2);
    c.molt((float)10.5, (float)2.5);

    return 0;
}
