#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];

    while(fgets(str, 100000, stdin))
    {
        int n = 0, len = 0, sum = 0;
        for(int i = 0; i <= strlen(str); i++)
        {
            if(str[i] != ' ' && str[i] != '\n')
            {
                n *= 10;
                n += str[i] - '0';
            }
            else
            {
                sum += n;
                len++;
                n = 0;
            }
        }

        printf("Size: %d\n", len);
        printf("Average: %.3lf\n", ((double)(sum))/len);
    }
  return 0;
}
