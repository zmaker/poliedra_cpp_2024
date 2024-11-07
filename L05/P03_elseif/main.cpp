#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Voti e giudizi" << endl;
    cout << "--------------" << endl;

    int voto = 0;
    cout << "voto: ";
    cin >> voto;
    cout << endl;

    string str;
    if (voto < 5)
    {
      str = "insuff";
    }
    else if (voto == 6)
    {
      str = "suff";
    }
    else if (voto == 7)
    {
      str = "buono";
    }
    else
    {
      str = "?";
    }

    cout << "giudizio: " << str << endl;

    return 0;
}
