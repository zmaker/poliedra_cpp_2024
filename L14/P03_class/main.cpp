#include <iostream>

using namespace std;

class Rect {
  public:
    int larg;
    int alt;
    Rect(); // costruttore di default
    Rect(int l, int w);
    ~Rect();
    int area();
};

Rect::Rect(){
  larg = 0;
  alt = 0;
}

Rect::Rect(int l, int w){
  larg = l;
  alt = w;
}

Rect::~Rect(){
  cout << "bye!" << endl;
}

int Rect::area(){
  return larg * alt;
}

int main()
{
    cout << "OOP" << endl;

    Rect r1(10,20);
    //r1.alt = 10;
    //r1.larg = 20;
    cout << "R: " << r1.alt << "x" << r1.larg << endl;
    cout << "Area: " << r1.area() << endl;

    Rect r2(4, 7);
    //r2.alt = 4;
    //r2.larg = 7;
    cout << "R: " << r2.alt << "x" << r2.larg << endl;
    cout << "Area: " << r2.area() << endl;

    Rect r3; //utilizzo il costruttore di default
    cout << "Area: " << r3.area() << endl;

    return 0;
}
