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
  Point operator- (Point);
};

Point::Point(){
  x = 0;
  y = 0;
  next = nullptr;
}
Point::Point(int x, int y){
  this->x = x;
  this->y = y;
  next = nullptr;
}
Point Point::operator+ (Point p){
  Point s;
  s.x = x + p.x;
  s.y = y + p.y;
  return s;
}

Point Point::operator- (Point p){
  Point r;
  r.x = this->x - p.x;
  r.y = this->y - p.y;
  return r;
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

  Point d;
  //a.operator-(b);

  d = a - b;
  cout << "d: (" << d.x << ", " << d.y << ")\n\n";

  return 0;
}
