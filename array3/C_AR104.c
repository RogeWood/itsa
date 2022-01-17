#include <stdio.h>
#include <stdlib.h>



int arr[10];
int numSum(int x)
{
    int ans = 0;
    while(x)
    {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}

int cmpfunc (const void * a, const void * b)
{
    int *pa = (int*)a;
    int *pb = (int*)b;

    int suma = numSum(*pa), sumb = numSum(*pb);
    if(suma < sumb) return 1;
    else if(suma == sumb) return a < b;
    else return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmpfunc);
    for(int i = 0; i < n; i++)
    {
        if(!i) printf("%d", arr[i]);
        else printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}
