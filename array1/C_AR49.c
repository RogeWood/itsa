#include <stdio.h>
#include <string.h>

int main()
{
  char s[100000];
  int n;
  fgets(s, 100000, stdin);
  scanf("%d", &n);

  for(int i = 0; i < strlen(s); i++)
    s[i] = ((s[i] >= 'A' && s[i] <= 'Z') ? (s[i]+n - 'A')%26 + 'A' : ((s[i] >= 'a' && s[i] <= 'z') ? (s[i]+n - 'a')%26 + 'a' : ((s[i] >= '0' && s[i] <= '9') ? (s[i]+n - '0')%10 + '0' : s[i])));

  printf("%s\n", s);
  return 0;
}
