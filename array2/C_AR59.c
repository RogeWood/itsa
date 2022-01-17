#include <stdio.h>
#include <string.h>

int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    char s[1000000];
    scanf("%s", s);
    int num[11] = {0};
    if(strlen(s) == 4)
    {
      for(int i = 0; i < 4; i++)
        num[s[i] - '0']++;

      int isPass  = 0, hasTwo = 0;
      for(int i = 0; i < 10; i++)
      {
        if(num[i] == 2)
        {
          if(!hasTwo)
          {
            hasTwo = 1;
            isPass = 1;
          }
          else isPass = 0;
        }
      }
      printf("%s\n", ((isPass) ? "Yes" : "No"));
    }
    else printf("Failure Input");

  }

  return 0;
}
