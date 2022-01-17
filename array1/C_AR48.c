#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    return;
}
int main()
{
  int n;
  scanf("%d", &n);
  int arr[4];
  for(int i = 0; i < 4; i++, n /= 10)
    arr[i] = (n%10+7) % 10;

  swap(&arr[0], &arr[2]);
  swap(&arr[1], &arr[3]);

  for(int i = 3; i >= 0; i--)
    printf("%d", arr[i]);
  printf("\n");
  return 0;
}
