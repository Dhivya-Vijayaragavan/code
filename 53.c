#include <stdio.h>
int main()
{
    long n,sum=0,temp;
    scanf("%ld",&n);
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("%ld",sum);

    return 0;
}
