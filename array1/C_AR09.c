#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
  int arr[10];
  char s[100000];
  scanf("%s", s);
  int len;
  for(int i = 0, j = 0; i < strlen(s); i++)
  {
    if(s[i] != ',')
    {
      arr[j] = s[i] - '0';
      j++;
      len = j;
    }
  }
  qsort(arr, len, sizeof(int), cmpfunc);
  int nmax = 0, nmin = 0;
  for(int i = 0; i < len; i++)
  {
    nmin *= 10;
    nmax *= 10;
    nmin += arr[i];
    nmax += arr[len-i-1];
  }
 printf("%d", nmax - nmin);

}
