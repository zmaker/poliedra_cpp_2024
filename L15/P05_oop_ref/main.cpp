#include <iostream>

using namespace std;

class Rect{
public:
  Rect();
  int area();
  int w, h;
};

Rect::Rect(){
  w = 0;
  h = 0;
}

int Rect::area(){
  return w*h;
}

int main()
{
    cout << "Puntatori e classi" << endl;

    Rect r;
    Rect *pr;
    pr = &r;

    pr->h = 10;
    pr->w = 30;
    int ans = pr->area();
    cout << "area: " << ans << endl;

    return 0;
}
