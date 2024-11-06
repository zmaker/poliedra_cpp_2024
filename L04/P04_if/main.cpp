#include <iostream>

using namespace std;

int main()
{
    /*
    if (expr)
    {
      //corpo
    }
    */

    int temp;
    cout << "temp: ";
    cin >> temp;
    cout << endl;

    if (temp > 20)
    {
      cout << "CALDO!" << endl;
    }

    if (temp > 20)
    {
      cout << "accendo condizionatore" << endl;
    }
    else
    {
      cout << "temp perfetta" << endl;
    }


    return 0;
}
