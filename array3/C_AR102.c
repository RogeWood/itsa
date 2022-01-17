#include <stdio.h>

int arr[500][500];
int cnt[500][500] = {0};
int main()
{
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) scanf("%d", &arr[i][j]);

  int next[8][2] = {{-1,-1},{-1,1},{1,-1},{1,1},{-1,0},{0,-1},{0,1},{1,0}};
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    {
      if(!arr[i][j])
      {
        for(int k = 0; k < 8; k++)
        {
          int x = i + next[k][0], y = j + next[k][1];
          if(x >= 0 && x < n && y >= 0 && y < n)
            if(arr[x][y])
              cnt[i][j]++;
        }
      }
    }
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(!j) printf("%d", cnt[i][j]);
      else printf(" %d", cnt[i][j]);
    }
    printf("\n");
  }
  return 0;
}
