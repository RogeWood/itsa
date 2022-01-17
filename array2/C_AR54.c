#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int arr[30] = {0};
  for(int i = 0; i < n; i++)
  {
    char c;
    scanf("%c", &c);
    arr[c-'a']++;
  }
  for(int i = 0; i < 30; i++)
    if(arr[i])
      printf("%c %d\n", (char)(i+'a'), arr[i]);
  return 0;
}
