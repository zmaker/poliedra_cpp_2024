#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED

class Rect {
public:
  Rect();
  Rect(int l, int a);
  int area();
  void prt();

private:
  int x;
  int y;
  int w;
  int h;
};

#endif // RECT_H_INCLUDED
