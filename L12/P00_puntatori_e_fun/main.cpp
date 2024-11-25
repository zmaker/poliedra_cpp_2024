#include <iostream>

using namespace std;

//passaggio per valore
void add(int n){
  //il valore della variabile è copiato
  n++;
}

//passaggio per indirizzo
void add2(int *n){
  if (n != nullptr) {
    (*n) = (*n) + 1;
  }
}

void leggiSensore(float *t, float *h, float *p) {
  (*t) = 18.34;
  (*h) = 75.5;
  (*p) = 1003.2;
}

void scambia(int *p1, int *p2){
  if ((p1 != nullptr) && (p2 != nullptr)) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
  }
}

void initstato(int *stato){
  if (stato != nullptr) {
    stato = 0;
  }
}

int main()
{
    cout << "Test puntatori e funzioni" << endl;

    int count = 0;
    cout << "1) valore di count: " << count << endl;
    add(count);
    cout << "2) valore di count: " << count << endl << endl;

    cout << "3) valore di count: " << count << endl;
    add2(&count);
    cout << "4) valore di count: " << count << endl;
    add2(&count);
    cout << "5) valore di count: " << count << endl << endl;

    cout << "Sim lettura sensore" << endl;
    float temp = 0;
    float press = 0;
    float hum = 0;
    leggiSensore(&temp, &press, &hum);
    cout << "t: " << temp << endl;
    cout << "p: " << press << endl;
    cout << "h: " << hum << endl << endl;

    int a = 10;
    int b = 20;
    cout << "scambio valori" << endl;
    cout << "a: " << a << " b: " << b << endl;
    scambia(&a, &b);
    cout << "a: " << a << " b: " << b << endl << endl;

    int stato;
    cout << "st: " << stato << endl;
    initstato(&stato);
    cout << "st. inizializzato: " << stato << endl;

    return 0;
}
