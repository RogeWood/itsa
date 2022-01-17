#include <stdio.h>

long long pow(int a, int b);

int main()
{
  int a, b;
  while(scanf("%d %d", &a, &b))
  {
    printf("%lld\n", pow(a,b));
  }
  return 0;
}

long long int pow(int a, int b)
{
    if(b == 0) return 1;
    int c = pow(a, b/2);

    if(b%2 == 1)
        return c*c*a;
    else
        return c*c;
}
