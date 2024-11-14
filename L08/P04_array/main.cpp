#include <iostream>

using namespace std;

int main()
{
    cout << "Array" << endl;

    int voti[10];

    voti[0] = 18;
    voti[1] = 20;
    voti[5] = 30;

    cout << "voto: " << voti[0] << endl;
    cout << "voto: " << voti[1] << endl;
    cout << "voto: " << voti[5] << endl;

    int temp[5] = {1,2,3,4,5};
    cout << "temp: " << temp[0] << endl;
    cout << "temp: " << temp[1] << endl;


    return 0;
}
