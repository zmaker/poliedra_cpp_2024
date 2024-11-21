#include <iostream>

using namespace std;

int main()
{
    cout << "puntatori" << endl;

    int *p; //un puntatore

    int n = 123;

    p = &n;

    cout << "indirizzo in p     : "<< p << endl;
    cout << "valore puntato da p: "<< *p << endl;

    *p = 99;

    cout << "valore puntato da p: "<< *p << endl;
    cout << "valore di n        : "<< n << endl;

    int *p2;
    p2 = p;

    cout << "indirizzo di p2    : "<< p2 << endl;
    (*p2)++;

    cout << "valore puntato da p2: "<< *p2 << endl;
    cout << "valore di n         : "<< n << endl << endl;

    //puntatori e array
    int num[5] = {12, 23, 34, 45, 56};
    int *pa = num;
    int *pb = num;
    cout << "pa:         "<< pa << endl;
    cout << "valore pa:  "<< *pa << endl;
    pa++;
    cout << "pa:         "<< pa << endl;
    cout << "valore pa:  "<< *pa << endl;
    pa++;
    cout << "pa:         "<< pa << endl;
    cout << "valore pa:  "<< *pa << endl;

    cout << "pb[0]         "<< pb[0] << endl;
    cout << "pb[1]         "<< pb[1] << endl;
    cout << "pb[2]         "<< pb[2] << endl;

    //puntatore nullo
    int *ptr = nullptr;

    //puntatore a variabile
    long x = 10;
    long *px = &x;

    //puntatore costante
    int m = 123;
    int *const pm= &m;

    //puntatore a costante
    const int v2 = 1234;
    const int *pv = &v2;

    //puntatore a puntore
    int q = 12;
    int *pq = &q;
    int **ppq = &pq;

    return 0;
}
