#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   if(n%10==0)
   {
       printf("%d",n);
   }
   else
   {
       n=n+(10-(n%10));
       printf("%d",n);
   }

    return 0;
}
