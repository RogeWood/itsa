#include <stdio.h>
#include <string.h>

int count[200] = {0};
int main()
{
  char s[10000];
  scanf("%s", s);
  for(int i = 0; i < strlen(s); i++)
    count[s[i]]++;

  for(int i = 200; i > 0; i--)
    if(count[i]) printf("%d %d\n", i, count[i]);
  return 0;
}
