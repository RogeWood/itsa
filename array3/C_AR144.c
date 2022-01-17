#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    fgets(s, 100000, stdin);
    int n = 0, index = 0, minn = 10000, maxn = -1, sum = 0, maxindex = 0;
    int slen = strlen(s);
    for(int i = 0; i < slen; i++)
    {
        if(s[i] != ' ' && s[i] != '\n')
        {
            n *= 10;
            n += s[i] - '0';
        }
        else
        {
            if(n < minn) minn = n;
            if(n > maxn)
            {
                maxn = n;
                maxindex = index;
            }
            sum += n;
            index++;
        }
    }
    printf("%d %d %d\n", minn, maxindex, sum);
    return 0;
}
