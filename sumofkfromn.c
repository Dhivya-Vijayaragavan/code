#include <stdio.h>

int main()
{
   int n,k,sum=0,a[50];
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=k;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    
    return 0;
}
