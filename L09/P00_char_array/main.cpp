#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

#define MAX_ARR_NUM 10

int main()
{
  char str[10] = "abcdefghi"; // fine stringa \0
  char msg[] = "nel mezzo del cammin di nostra vita...";

  cout << str << " size:" << sizeof(str) << " strlen:" << strlen(str) << endl;

  int n[MAX_ARR_NUM];
  for (int i = 0; i < (sizeof(n)/sizeof(int)); i++ ) {
      cout << n[i] << " ";
  }
  cout << endl;

  //stringa da cin
  char s1[20];
  char s2[20];
  cout << "s1: ";
  cin.getline(s1, 20);
  cout << "s2: ";
  cin.getline(s2, 20);

  int conf = strcmp(s1, s2);
  cout << "conf: " << conf <<endl;
  if (strcmp(s1, s2) == 0) {
    cout << "UGUALI" << endl;
  }

  strcat(s1, s2);
  cout << "concat: " << s1 << endl;
  cout << "size: " << sizeof(s1) << " strlen:" << strlen(s1) << endl;

  if (strchr(msg, 'z')) {
    cout << "trovata z" << endl;
  }
  if (strstr(msg, "cam")) {
    cout << "trovata cam" << endl;
  }

  setlocale(LC_ALL, "");
  cout << "аит... " << endl;

  return 0;
}
