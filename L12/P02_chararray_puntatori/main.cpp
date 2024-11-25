#include <iostream>

using namespace std;

void saluta(char *str){
  cout << "ciao, " << str << endl;
}

int main()
{
    cout << "Array di caratteri e puntatori" << endl;
    char str[] = "nel mezzo del cammin di nostra...";
    char *p;

    p = &str[0];
    cout << "un char: " << *p << endl;

    char *ps;
    ps = str;
    cout << "un char: " << *ps << endl;
    ps++;
    cout << "un char: " << *ps << endl;

    char *pmsg = "era una notte buia e tempestosa...";

    int i = 0;
    while(str[i] != '\0'){
      cout << str[i];
      i++;
    }
    cout << endl;

    while (*pmsg != '\0') {
      cout << *pmsg;
      pmsg++;
    }
    cout << endl;

    char nome[] = "mario";
    saluta(nome);

    return 0;
}
