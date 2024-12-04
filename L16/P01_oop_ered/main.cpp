#include <iostream>

using namespace std;

class Shape{
public:
  int x;
  int y;
  int w;
  int h;
  Shape();
  Shape(int, int);
  int area();
};

Shape::Shape(){
  x = 0;
  y = 0;
  w = 0;
  h = 0;
}

Shape::Shape(int larg, int alt){
  x = 0;
  y = 0;
  w = larg;
  h = alt;
}

int Shape::area(){
  return w*h;
}

class Cubo: public Shape {
public:
  int altezza;
  int volume();
  Cubo();
  Cubo(int);
};

Cubo::Cubo(){
  altezza = 1;
}

Cubo::Cubo(int hh){
  altezza = hh;
  w = hh;
  h = hh;
}

int Cubo::volume() {
  return w*h*altezza;
}


int main()
{
    cout << "OOP - gerarchie" << endl;

    Shape s(10,20);
    cout << "s: " << s.area() << endl;

    Cubo c(10);
    cout << "c: " << c.volume() << endl;
    c.w = 5;
    cout << "c: " << c.volume() << endl;

    return 0;
}
