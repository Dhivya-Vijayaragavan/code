#include <stdio.h>

int main()
{
    int n,a,d,ap;
    scanf("%d %d %d",&n,&a,&d);
    if(1<=n&&a&&d<=100000)
    {
    ap=(n*(2*a+(n-1)*d))/2;
    printf("%d",ap);
    }
    else
    {
        printf("enter the n a d value between 1 to 10000");
    }
    return 0;
}
