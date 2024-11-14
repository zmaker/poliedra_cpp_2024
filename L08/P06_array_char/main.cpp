#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[6] = "mario";
    cout << str << endl;

    char nome[25];
    nome[0] = 'm';
    nome[1] = 'a';
    nome[2] = 'r';
    nome[3] = 'i';
    nome[4] = 'o';
    nome[5] = '\0';
    cout << nome << endl;

    char cognome[] = "rossi";
    cout << cognome << " " << sizeof(cognome) << endl ;

    //stringa da cin
    char frase[50];
    cout << "frase: ";
    cin.getline(frase, 50);
    cout << frase;

    strcpy(frase, "hello world!");
    cout << frase;

    return 0;
}
