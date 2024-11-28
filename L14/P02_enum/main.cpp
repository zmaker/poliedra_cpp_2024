#include <iostream>

using namespace std;

/*enum nome {
  VAL1,
  VAL2
};
*/
enum Days {
  LUN,
  MAR,
  MER,
  GIO,
  VEN,
  SAB,
  DOM
};

enum Stati {
  IDLE,
  RUNNING,
  ERROR,
  DEBUG = 99
};

//enum tipizzate
enum class Colore {
  RED,
  BLUE,
  GREEN
};

enum class FontType : unsigned int {
  BOLD,
  ITAL,
  UNDERL
};

int main() {
  cout << "enumerazioni" << endl;

  Days oggi = LUN;

  if (oggi == LUN) {
    cout << "oggi e' lunedi" << endl;
  }

  cout << oggi << endl;

  Stati st = IDLE;
  switch (st) {
  case IDLE:
    cout << "idle" << endl;
    break;
  case RUNNING:
    cout << "run" << endl;
    break;
  case ERROR:
    cout << "err" << endl;
    break;
  }

  cout << DEBUG << endl;

  Colore c = Colore::GREEN;
  if (c == Colore::GREEN) {
    cout << "green!" << endl;
  }

  cout << (int)(c) << endl;

  return 0;
}
