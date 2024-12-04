#include <iostream>

using namespace std;

class Punto{
public:
  int x;
  int y;

  Punto();
  void print();

private:
  int color;

friend void modificaPunti(int);
//friend int main();
//friend class X;
};

Punto::Punto(){
  x = 0;
  y = 0;
  color = 0;
}

void Punto::print(){
  cout << "(" << x << ", " << y << ") c: " << color << endl;
}

void modificaPunti(int c){
  Punto p;
  p.color = c;
  p.print();
}

int main()
{
    cout << "Friend fun" << endl;

    Punto p;
    p.x = 10;
    p.y = 20;
    p.print();

    modificaPunti(12);

    return 0;
}
