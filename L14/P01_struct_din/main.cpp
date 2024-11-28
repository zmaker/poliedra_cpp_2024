#include <iostream>

using namespace std;

struct Punto {
  int x;
  int y;
  int z;
};

Punto* crea(int x, int y, int z){
  Punto *p = new Punto;
  //(*p).x
  p->x = x;
  p->y = y;
  p->z = z;
  return p;
}

void kill(Punto *p){
  delete p;
  cout << "free mem";
}

void prt(const Punto *p){
  cout << "P:(" << p->x << "," << p->y << ") z=" << p->z << endl;
}

void sposta(Punto *p){
  p->x++;
  p->y++;
  p->z++;
}

int main() {
  cout << "Strutture dinamiche" << endl;

  Punto *p1 = crea(10,20,0);

  prt(p1);
  sposta(p1);
  prt(p1);

  kill(p1);

  return 0;
}
