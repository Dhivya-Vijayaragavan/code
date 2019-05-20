#include <stdio.h>
int main()
{
    long int a;
    scanf("%ld",&a);
    if (a%2==0)
    {
    printf("even");
    }
    else if(a%2==1)
        {
         printf("odd");
    }
         else
          {
              printf("invalid");
              
          }

    return 0;
}

