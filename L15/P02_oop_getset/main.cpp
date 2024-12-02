#include <iostream>

using namespace std;

class Rect {

public:
  Rect(int w, int h);
  Rect();
  ~Rect();
  int area();

  int getX();
  void setX(int xi);
  int getY();
  void setY(int yi);

private:
  int weight;
  int height;
  int x;
  int y;
};

Rect::Rect(int w, int h){
  weight = w;
  height = h;
  x = 0;
  y = 0;
}
Rect::Rect(){
  weight = 0;
  height = 0;
  x = 0;
  y = 0;
}
Rect::~Rect(){
  cout << "bye!\n";
}
int Rect::area(){
  return weight*height;
}

int Rect::getX(){
  return x;
}
void Rect::setX(int xi){
  x = (xi < 0 ? 0 : xi);
}
int Rect::getY(){
  return y;
}
void Rect::setY(int yi){
  y = (yi < 0 ? 0 : yi);
}

int main() {
    cout << "Rect" << endl;

    Rect r1(10,20);
    cout << "area r1(): " << r1.area() << endl;

    r1.setX(12);
    r1.setY(-100);
    cout << "Rx: " << r1.getX() << ", " << r1.getY() << endl;

    Rect r2(34, 56);
    Rect r3;
    //Rect r4();  //ERRATO

    Rect rbuf[10];
    for (int i = 0; i < 10; i++) {
      rbuf[i].setX(i*10);
    }
    for (int i = 0; i < 10; i++) {
      cout << rbuf[i].getX() << " ";
    }
    cout << endl;

    return 0;
}
