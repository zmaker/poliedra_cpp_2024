#include <iostream>

using namespace std;

class Cerchio{

public:
  Cerchio();
  Cerchio(int);
  int area();
protected:
  int raggio;
};

Cerchio::Cerchio(){
  raggio = 0;
}
Cerchio::Cerchio(int r){
  raggio = r;
}
int Cerchio::area(){
  return (3.14 * raggio * raggio);
}

class Cilindro: public Cerchio{
  int colore;

public:
  Cilindro();
  Cilindro(int, int);
  int volume();
protected:
  int altezza;

};

Cilindro::Cilindro(){
  altezza = 1;
  raggio = 1;
}

Cilindro::Cilindro(int r, int h){
  altezza = h;
  raggio = r;
}

int Cilindro::volume(){
  return area()*altezza;
}

int main()
{
    cout << "OOP protected" << endl;

    Cerchio c(10);
    cout << "c: " << c.area() << endl;
    //c.raggio = 12;

    Cilindro cil(10,20);
    cout << "cil: " << cil.volume() << endl;
    //cil.raggio = 10;
    //cil.altezza = 5;

    return 0;
}
