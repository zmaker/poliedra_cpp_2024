#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ifstream dati_in;
  dati_in.open("file1.txt");

  //lettura
  string msg;
  dati_in >> msg;

  cout << msg;
  dati_in >> msg;
  cout << msg;

  dati_in.close();

  //scrittura
  ofstream  dati_out;
  dati_out.open("file2.txt");
  dati_out << "test scrittura file" << endl;
  dati_out.close();

  //scrittura in append
  dati_out.open("file3.txt", ios::app);
  dati_out << "hello!" << endl;
  dati_out.close();

  return 0;
}
