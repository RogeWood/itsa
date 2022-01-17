#include <stdio.h>

int main()
{
  int m, n;
  scanf("%d %d", &m, &n);
  long int sum = 0;
  for(int i = 1; i <= m; i++)
    if(!(i*i % n)) sum += i*i;

  printf("%ld\n", sum);
  return 0;
}
