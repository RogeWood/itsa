#include <stdio.h>

int main()
{
  char s[10000];
  scanf("%s", s);
  char arr[100][100000];
  int len = 0;
  while(scanf("%s", arr[len]) != EOF) len++;

  for(int i = 0; i < len; i++) printf("%s\n", arr[i]);
  return 0;
}
