#include <iostream>

#define MAX_ORE 40
const int TARIFFA1 = 25;
const int TARIFFA2 = 22;

using namespace std;

int main()
{
    cout << "Elabora paghe" << endl;
    cout << "-------------" << endl;

    cout << "ore lavorate: ";
    int ore = 0;
    cin >> ore;
    cout << endl;

    int paga = 0;

    if (ore >= MAX_ORE)
    {
      paga = TARIFFA1 * ore;
    }
    else
    {
      paga = TARIFFA2 * ore;
    }

    cout << "paga: " << paga << endl;

    return 0;
}
