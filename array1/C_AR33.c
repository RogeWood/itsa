#include <stdio.h>

int arr[5000][5000];
int main()
{
   int n, m;
   scanf("%d %d", &n, &m);

  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      scanf("%d", &arr[i][j]);


  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("%d", arr[j][i]);
      if(j != n-1) printf(" ");
    }
      printf("\n");
  }
  return 0;
}
