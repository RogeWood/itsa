#include <stdio.h>

int A[50][50], B[50][50];

int main()
{
  int a,b;
  scanf("%d %d", &a, &b);
  for(int i = 0; i < a; i++)
    for(int j = 0; j < b; j++)
      scanf("%d", &A[i][j]);

  int a1, b1;
  scanf("%d %d", &a1, &b1);
  for(int i = 0; i < a1; i++)
    for(int j = 0; j < b1; j++)
      scanf("%d", &B[i][j]);

  for(int i = 0; i < a; i++)
  {
    for(int j = 0; j < b1; j++)
    {
      int sum = 0;
      for(int k = 0; k < b; k++)
        sum += A[i][k] * B[k][j];
      if(!j) printf("%d", sum);
      else printf(" %d", sum);;
    }
    printf("\n");
  }

  return 0;
}
