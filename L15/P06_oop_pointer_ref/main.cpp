#include <iostream>

using namespace std;

class Point{
public:
  int x;
  int y;
  Point *next;

  Point();
  Point(int, int);
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

int main(){
  cout << "Puntini" << endl;

  Point a(1,1);
  Point b(3, 5);
  Point c(4, 2);

  cout << "a: (" << a.x << ", " << a.y << ")\n";
  cout << "b: (" << b.x << ", " << b.y << ")\n";
  cout << "c: (" << c.x << ", " << c.y << ")\n\n";

  a.next = &b;
  b.next = &c;

  cout << "a: (" << a.x << ", " << a.y << ")\n";
  cout << "b: (" << a.next->x << ", " << a.next->y << ")\n\n";

  cout << "b: (" << b.x << ", " << b.y << ")\n";
  cout << "c: (" << b.next->x << ", " << b.next->y << ")\n";



  return 0;
}
