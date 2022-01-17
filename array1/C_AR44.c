#include <stdio.h>
#include <string.h>

int main()
{
  char s[1000000];
  scanf("%s", s);
  int flag = 0;
  for(int i = 0; i <strlen(s)/2 + 1; i++)
    if(s[i] != s[strlen(s) - i - 1])
    {
      flag = 1;
      break;
    }
  printf("%s\n", ((flag) ? "NO" : "YES"));
  return 0;
}
