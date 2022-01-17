#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int a, sum = 0;
    scanf("%d", &a);
    char s[1000000];
    scanf("%s", s);
    for(int i = 0; i < a; i++)
    {
      if(s[i] == '.')
      {
        sum++;
        i += 2;
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
