#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
  //https://cplusplus.com/reference/cstdio/printf/

  int n = 123;
  printf("n vale: %d\n", n);
  int m = 34;
  printf("n: %d  m: %d\n", n, m);

  char ch = 'a';
  printf("c: %c %s \n", ch, "hello");

  float t = 18.23456;
  printf("temp: %f\n", t);
  printf("temp: %10.2f\n", t);
  printf("temp: %010.2f\n", t);
  printf("temp: %+010.2f\n", t);

  printf("n   : %10d\n", n);
  printf("n   : %010d\n", n);

  int dd = 1;
  int mm = 7;
  int yy = 2024;
  printf("data: %d/%d/%d\n", dd, mm, yy);
  printf("data: %02d/%02d/%04d\n", dd, mm, yy);

  return 0;
}
