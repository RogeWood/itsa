#include <stdio.h>

int main()
{
  int arr[6];
  for(int i = 0; i < 6; i++)
    scanf("%d", &arr[i]);
  for(int j = 5; j >= 0; j--)
  {
    if(j == 0)
      printf("%d\n", arr[j]);
    else
      printf("%d ", arr[j]);
  }
  return 0;
}
