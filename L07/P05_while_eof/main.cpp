#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("dati.txt");

    if (!file)
    {
      cout << "errore file" << endl;
      return 1;
    }

    char ch;
    while (!file.eof())
    {
      cout << ch;
      file.get(ch);
    }

    file.close();

    return 0;
}
