#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    int arr[15];
    while(fgets(str, 1000, stdin))
    {
        int n = 0, index = 0;
        for(int i = 0; i <= strlen(str); i++)
        {
            if(str[i] != ' ' && str[i] != '\n')
            {
                n *= 10;
                n += str[i] - '0';
            }
            else
            {
                arr[index] = n;
                index++;
                n = 0;
            }
        }

        for(int i = index-1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }
    return 0;
}
