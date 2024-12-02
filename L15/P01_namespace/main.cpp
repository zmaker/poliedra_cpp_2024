#include <iostream>

using namespace std;

namespace geometria {
  int x,y;
  int z;
}

namespace algebra {
  int x, y, z;
  void saluta () {
    cout << "hello\n";
  }
}

namespace complessi {
  int za, zb;
}

using algebra::z;
using namespace complessi;

namespace test = algebra;

int main() {
    cout << "Namespace" << endl;

    geometria::x = 10;
    geometria::y = 20;

    algebra::x = 34;
    algebra::y = 35;

    cout << "G: x=" << geometria::x << ", y=" << geometria::y << endl;
    cout << "A: x=" << algebra::x << ", y=" << algebra::y << endl;

    z = 100;
    cout << "A: z=" << z << endl;
    cout << "A: z=" << algebra::z << endl;
    geometria::z = 99;
    cout << "G: z=" << geometria::z << endl;

    za = 22;
    zb = 65;

    cout << "Z: a=" << za << ", b=" << zb << endl;

    algebra::saluta();
    test::saluta();

    return 0;
}
