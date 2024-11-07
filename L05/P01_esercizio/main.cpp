#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "Elabora voti - v1.0" << endl;
    cout << "-------------------" << endl;

    // 1 - leggo il file con i dati
    ifstream fs;
    string nome, cognome;
    int v1, v2, v3, v4, v5;

    fs.open("datain.txt");
    fs >> nome >> cognome;
    fs >> v1 >> v2 >> v3 >> v4 >> v5;
    fs.close();

    //2 - stampare i dati
    cout << "p: " << nome << ", " << cognome << endl;
    cout << "voti:" << setw(5) << v1;
    cout << setw(5) << v2 << setw(5) << v3;
    cout << setw(5) << v4 << setw(5) << v5 << endl;

    //3 - calcolo media
    int divisore = 5;
    int somma = v1 + v2 + v3 + v4 + v5;
    //cout << somma << endl;
    float avg = (float)somma / (float)divisore;
    cout << "media:" << setw(5) << avg;

    //4 - salvo su file
    ofstream fo;
    fo.open("elab.txt");
    fo << cognome << "," << nome << "," << avg << endl;
    fo.close();

    return 0;
}
