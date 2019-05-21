#include <stdio.h>

int main()
{
    int n,k,s=1;
    scanf("%d %d",&n,&k);
    while(k!=0)
    {
        s=s*n;
        --k;
    }
    printf("%d",s);

    return 0;
}
