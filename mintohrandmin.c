#include <stdio.h>

int main()
{
   int hr=0,min;
   scanf("%d",&min);
   if(min%60>0)
   {
       hr=min/60;
       min=min%60;
       printf("%d %d",hr,min);
   }
   
   return 0;
}
