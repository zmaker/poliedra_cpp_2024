#include <iostream>
#include <cmath>

using namespace std;

int somma(int, int);
void saluta();
int molt(int, int);
float somma(float, float);
double somma(double, double);

int main()
{
  //https://cplusplus.com/reference/cstring/

    cout << "funzioni" << endl;

    int n = 10;
    cout << "esempio cmath pow: " << pow(3, 2) << endl;
    cout << "somma: " << somma(n, 20) << endl;
    int c = somma(23, 34);

    saluta();

    cout << "molt: " << molt(12, 12) << endl;

    cout << "somma int: " << somma(10,20) << endl;
    float n1 = 12.3;
    float n2 = 23.4;
    cout << "somma float: " << somma(n1, n2) << endl;

    return 0;
}

int somma(int a, int b) {
  int ret = a + b;
  return ret;
}

void saluta() {
  cout << "ciao" << endl;
}

int molt(int a, int b){
  return a * b;
}

float somma(float a, float b){
  return a+b;
}
double somma(double a, double b){
  return a+b;
}
