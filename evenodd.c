#include <stdio.h>
int main()
{
    long int a;
    scanf("%ld",&a);
    if (a%2==0)
    {
    printf("Even");
    }
    else if(a%2==1)
        {
         printf("Odd");
    }
         else
          {
              printf("invalid");
              
          }

    return 0;
}

