#include <iostream>
#include "Rect.h"

using namespace std;

Rect::Rect() {
  x = 0;
  y = 0;
  w = 0;
  h = 0;
}

Rect::Rect(int l, int a) {
  x = 0;
  y = 0;
  w = l;
  h = a;
}

int Rect::area() {
  return w*h;
}

void Rect::prt(){
  cout << "R(" << w << "x" << h << ")@(" << x << "," << y << ")" << endl;
}
