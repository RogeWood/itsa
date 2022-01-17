#include <stdio.h>

int main()
{
  long long int sum = 0;
  for(int i = 0; i < 6; i++)
  {
    int n;
    scanf("%d", &n);
    sum += n*n*n;
  }

  printf("%lld", &sum);
  return 0;
}
