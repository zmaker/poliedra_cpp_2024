#include <iostream>

using namespace std;

class Point{
public:
  virtual void draw(); // = 0; per implementazione pura
};

void Point::draw(){
  cout << "." << endl;
}

class Line: public Point {
public:
  void draw();
};

void Line::draw(){
  cout << "------" << endl;
}

class DottedLine: public Point {
public:
  void draw();
};

void DottedLine::draw(){
  cout << "- - - " << endl;
}


int main()
{
    cout << "OOP Virtual" << endl;

    Point p;
    p.draw();
    Line l;
    l.draw();
    DottedLine dl;
    dl.draw();

    cout << endl;
    Point *p1 = &p;
    Point *p2 = &l;
    Point *p3 = &dl;

    p1->draw();
    p2->draw();
    p3->draw();

    return 0;
}
