#include <stdio.h>

bool pri[1003] = {0};
int p[1003];

void findPrimary()
{
  pri[0] = 1;
  pri[1] = 1;
  for(int i = 2; i < 1003; i++)
  {
    if(!pri[2])
    {
      for(int j = i+i; j < 1003; j += i) pri[j] = 1;
    }
  }

  for(int i = 0, j = 0; i < 1003; i++)
    if(!pri[i])
    {
      p[j] = i;
      j++;
    }
}
int main()
{
  int a;
  scanf("%d", &a);
  findPrimary();


  return 0;
}
