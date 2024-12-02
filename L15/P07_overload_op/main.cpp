#include <iostream>

using namespace std;

class Point{
public:
  int x;
  int y;
  Point *next;

  Point();
  Point(int, int);
  Point operator+ (Point);
};

Point::Point(){
  x = 0;
  y = 0;
  next = nullptr;
}
Point::Point(int a, int b){
  x = a;
  y = b;
  next = nullptr;
}
Point Point::operator+ (Point p){
  Point s;
  s.x = x + p.x;
  s.y = y + p.y;
  return s;
}

int main() {
  cout << "Overloading operatori" << endl;
  Point a(10,20);
  Point b(5,6);

  Point c;
  c = a + b;//a.operator+(b)
  cout << "a: (" << a.x << ", " << a.y << ")\n";
  cout << "b: (" << b.x << ", " << b.y << ")\n";
  cout << "c: (" << c.x << ", " << c.y << ")\n\n";

  return 0;
}
