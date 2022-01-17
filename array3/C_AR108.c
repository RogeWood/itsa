#include <stdio.h>
#include <string.h>

int n[30] = {0};
int main()
{
  char s[100000];
  scanf("%s", s);

  for(int i = 0; i < strlen(s); i++)
    n[(s[i] < 'a') ? s[i] - 'A': s[i] - 'a']++;

  for(int i = 0; i < 30; i++)
    if(n[i]) printf("%c %d\n", (char)(i+'a'), n[i]);
  return 0;
}
