#include <iostream>
#include <cstring>

using namespace std;

struct data {
  int giorno;
  int mese;
  int anno;
};

struct Persona {
  string nome;
  string cognome;
  int eta;
  float altezza;
  char addr[20];
};

struct utente {
  string login;
  string password;
  data data_reg;
};

struct libro {
  string titolo;
  string autore;
  int anno;
  float prezzo;

  void stampa(){
    cout << titolo << " - " << autore << " (" << anno << ") " << prezzo << endl;
  }
};

int main(){
  cout << "Strutture" << endl;

  /*
  struct nome {
    tipo nome;
    tipo nome;
  };
  */

  Persona p1;
  p1.nome = "Mario";
  p1.cognome = "Rossi";
  p1.eta = 35;
  p1.altezza = 1.75;

  cout << p1.nome << endl;
  cout << p1.cognome << endl;
  cout << p1.eta << endl;
  cout << p1.altezza << endl << endl;

  Persona p2 = {"Luigi", "Bianchi", 28, 1.87};

  cout << p2.nome << endl;
  cout << p2.cognome << endl;
  cout << p2.eta << endl;
  cout << p2.altezza << endl;

  //p2.addr = "via milano"; // NON POSSIBILE
  strcpy(p2.addr, "via milano");
  cout << p2.addr << endl << endl;

  cout << "struttura utente" << endl;
  utente u;
  u.login = "mario";
  u.password = "solita";
  u.data_reg.giorno = 1;
  u.data_reg.mese = 5;
  u.data_reg.anno = 2024;
  cout << u.login << endl;
  cout << u.password << endl;
  cout << u.data_reg.giorno << endl;
  cout << u.data_reg.mese << endl;
  cout << u.data_reg.anno << endl << endl;

  utente u2 = {"luigib", "00000", 12, 10, 2001};
  cout << u2.login << endl;
  cout << u2.password << endl;
  cout << u2.data_reg.giorno << endl;
  cout << u2.data_reg.mese << endl;
  cout << u2.data_reg.anno << endl << endl;

  libro l;
  l.titolo = "promessi sposi";
  l.autore = "A.Manzoni";
  l.anno = 1875;
  l.prezzo = 17.5;
  l.stampa();

  return 0;
}
