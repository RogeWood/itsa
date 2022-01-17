#include <stdio.h>
#include <string.h>

void add(char *a, char *b);
int main()
{
  int n;
  scanf("%d", &n);
  while(n--)
  {
    char a[1000000], b[1000000];
    scanf("%s %s", a, b);
    add(a, b);
  }
  return 0;
}

void add(char *a, char *b)
{
    int sum[50]={0};
    int an[50] = {0}, bn[50] = {0};
    for(int i=0;i<strlen(a);i++) an[i] = a[strlen(a)-i-1] - '0';
    for(int i=0;i<strlen(b);i++) bn[i] = b[strlen(b)-i-1] - '0';
    int len = (strlen(a) > strlen(b)) ?strlen(a): strlen(b);

    for(int i=0;i<len;i++)
    {
      sum[i] += an[i] + bn[i];
      sum[i+1] += sum[i]/10;
      sum[i] %= 10;
    }

    int flag = 0;
    for(int i = len; i >= 0; i--)
    {
      if(flag)
        printf("%d",sum[i]);
      else if(sum[i])
      {
        flag = 1;
        printf("%d",sum[i]);
      }
    }
    printf("\n");

    return;
 }
