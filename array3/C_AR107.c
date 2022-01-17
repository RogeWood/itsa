#include <stdio.h>

int main()
{
  int a, b, c, d, e, f, g, h, i;
  scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);
  int ans = a * e * i + d * h * c + g * b * f - c * e * g - b * d * i - a * f * h;
  printf("%d", ans);
  return 0;
}
