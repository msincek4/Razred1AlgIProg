#include <stdio.h>

int main() {
  int m1, s1, m2, s2, m3, s3, h, m, s;
  scanf("%d %d", &m1, &s1);
  scanf("%d %d", &m2, &s2);
  scanf("%d %d", &m3, &s3);
  scanf("%d %d %d", &h, &m, &s);
  s += s1 + s2 + s3;
  m += s / 60;
  s = s % 60;
  m += m1 + m2 + m3;
  h += m / 60;
  m = m % 60;
  printf("%d:%d:%d\n", h, m, s);
  return 0;
}



 









