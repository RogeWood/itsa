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
  int one = 0, two = 0, three = 0;
  int arr[3];
  for(int i = 0; i < 3; i++)
  {
    scanf("%d,%d,%d", &arr[0], &arr[1], &arr[2]);
    for(int j = 0; j < 3; j++)
    {
      int a = arr[j];
      if(a >= three)
      {
        three = a;
        if(three > two) swap(&three, &two);
        if(two > one) swap(&one, &two);
      }
    }
  }
  printf("%d\n", one+two+three);
  return 0;
}
