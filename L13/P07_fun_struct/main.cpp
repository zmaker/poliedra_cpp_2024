#include <iostream>

using namespace std;

struct punto {
  int x;
  int y;
  int z;
};

void stampa(const punto &p){
  cout << p.x << "," << p.y << " (" << p.z << ")" << endl;
}
void muovi(punto &p){
  p.x++;
  p.y++;
}
void salta(punto *p){
  //(*p).z += 10;
  p->z += 10;
}

int main() {
  punto a;
  a.x = 10;
  a.y = 20;
  a.z = 0;

  stampa(a);
  muovi(a);
  stampa(a);
  salta(&a);
  stampa(a);

  return 0;
}
