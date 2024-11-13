#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int n = 0;

  cout << "Indovina il numero" << endl;

  //genero un numero casuale (segreto)
  int segreto = (rand() + time(0)) % 100;
  cout << segreto << endl;

  bool indovinato = false;

  int tentativi = 0;

  while ((!indovinato) && (tentativi < 3) )
  {
    cout << "numero: ";
    cin >> n;
    tentativi++;
    cout << "t: " << tentativi << endl;

    if (n == segreto)
    {
      cout << "INDOVINATO!" << endl;
      indovinato = true;
    }
    else
    {
      cout << "NON INDOVINATO!" << endl;
      if (n > segreto)
      {
        cout << "il numero segreto è più basso" << endl;
      }
      else
      {
        cout << "il numero segreto è più alto" << endl;
      }
      /*
      if (tentativi >= 3)
      {
        cout << "fine tentativi" << endl;
        indovinato = true;
      }
      */
    }
  }


  return 0;
}
