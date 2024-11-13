#include <iostream>

using namespace std;

int main()
{
    char ch = '\0';

    while (ch != 'q')
    {
      ch = cin.get();
      cout << "ch:" << ch << " ";
    }
    cout << endl << "OK" << endl;

    return 0;
}
