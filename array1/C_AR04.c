#include <stdio.h>

int arr[105][105];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a,b;
        scanf("%d", &a);
        scanf("%d", &b);
        for(int i = 0 ; i < a; i++)
        for(int j = 0; j < b; j++)
        scanf("%d", &arr[i][j]);
        int dir[4][2] = {{1,0}, {0,1}, {-1,0},{0,-1}};
        for(int i = 0 ; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                if(arr[i][j] == 0) printf("_");
                else
                {
                    int flag = 1;
                    for(int k = 0; k < 4; k++)
                    {
                        int x = i - dir[k][0], y = j - dir[k][1];
                        if(arr[x][y] == 0 && x>=0 && x<=a && y>=0 && y<b)
                        {
                            flag = 0;
                            printf("0");
                            break;
                        }
                    }
                    if(flag) printf("_");
                }
                printf(" ");
                if(j == b-1) printf("\n");
            }
        }
        if(t) printf("\n");
    }
}
