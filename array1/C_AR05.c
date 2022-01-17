#include <stdio.h>

int check[30] = {0};
int main()
{
  int n;
  scanf("%d", &n);
  int maxn = 0;
  for(int i = 0; i < n; i++)
  {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = a; i < b; i++)
    {
      check[i]++;
      if(check[i] > maxn) maxn = check[i];
    }
  }

  printf("%d\n", maxn);
  return 0;
}
