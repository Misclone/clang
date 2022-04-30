#include <stdio.h>

int funcDouble(int x) {
  x = x * 2;
  return x;
}

int main(void) {
  int a = 3;
  printf("変数aの値は%dです\n", a);

  printf("funcDouble関数によりaを2倍にします\n");
  a = funcDouble(a);

  printf("aは%dです\n", a);
  return 0;
}