#include <stdio.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char c;
        scanf("%c\n", &c);
        printf("%c\n", c+2);
    }
    return 0;
}
