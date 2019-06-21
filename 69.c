#include <stdio.h>

int main()
{
   int n,m,diff;
   scanf("%d %d",&n,&m);
   diff=n-m;
   if(diff%2==0)
   {
       printf("even");
   }
   else
   {
       printf("odd");
   }
    return 0;
}
