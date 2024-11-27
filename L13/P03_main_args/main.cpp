#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

  cout << "test parametri" << endl;
  cout << "num parametri:" <<
  argc << endl;

  for (int i = 0; i < argc; i++){
    cout << i << ": " << argv[i] << endl;
  }

  return 0;
}
