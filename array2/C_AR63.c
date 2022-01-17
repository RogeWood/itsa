#include <stdio.h>

int A[50][50];

int main()
{
  int a,b;
  scanf("%d %d", &a, &b);
  for(int i = 0; i < a; i++)
    for(int j = 0; j < b; j++)
      scanf("%d", &A[i][j]);

  scanf("%d %d", &a, &b);
  for(int i = 0; i < a; i++)
    for(int j = 0; j < b; j++)
    {
      int n;
      scanf("%d", &n);
      A[i][j] += n;
    }

  for(int i = 0; i < a; i++)
  {
    for(int j = 0; j < b; j++)
    {
      if(!j) printf("%d", A[i][j]);
      else printf(" %d", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
