#include <stdio.h>
int main()
{
    int n, i,fact = 1;
    scanf("%d",&n);
    if (n < 0)
        printf("enter a positive number");

    else
    {
        for(i=1; i<=n; ++i)
        {
            fact=fact * i;  
        }
        printf("%d",fact);
    }

    return 0;
}
