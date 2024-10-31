#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    char  _
    short __
    int   ____
    long  ________

    float   ____
    double  ________

    bool

    string
    */

    //int temp stanza;
    int temp;
    int temp_stanza;
    int tempStanza;
    int temp2;
    //int 2temp;
    int px12;

    temp = 18;

    int pressione = 0;
    long tempo_accensione = 0;
    char ch = 'a';
    //char ch2 = 'abc';

    int x, y, z;

    int num1;
    num1  = 4 * 5 + 10;
    int num2;
    num2 = num1 * 10;

    double prezzo = 12.3;

    string str = "hello";

    cout << "num1: " << num1 << endl;
    cout << "prezzo: " << prezzo << endl;
    cout << "char: " << ch << endl;
    cout << "str: " << str << endl;

    cout << "int: " << sizeof(int) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "bool: " << sizeof(bool) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "string: " << sizeof(str) << endl;

    unsigned int tempo;

    const float PI = 3.14;
    const unsigned short NUM_ELEMENTI = 100;
    //PI = 23.0;

    int n = 100;
    cout << endl << "n: " << n << endl;
    n = 200;
    cout << "n: " << n << endl;
    n = n + 1;
    cout << "n: " << n << endl;
    n++;
    cout << "n: " << n << endl;
    ++n;
    cout << "n: " << n << endl;
    n--;
    cout << "n: " << n << endl;
    --n;
    cout << "n: " << n << endl;

    cout << endl << "autoincrementi" << endl;
    n = 0;
    cout << "n: " << n << endl;
    cout << "n: " << n++ << endl;
    cout << "n: " << n << endl;

    n = 0;
    cout << endl << "n: " << n << endl;
    cout << "n: " << ++n << endl;
    cout << "n: " << n << endl;

    n = 10;
    cout << endl << "n: " << n << endl;
    cout << "n: " << n-- << endl;
    cout << "n: " << n << endl;

    n = 10;
    cout << endl << "n: " << n << endl;
    cout << "n: " << --n << endl;
    cout << "n: " << n << endl;

    return 0;
}
