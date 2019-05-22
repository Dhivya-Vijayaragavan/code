#include <stdio.h>

int main()
{
   int hr,min,hr1,hr2,min1,min2;
   scanf("%d %d",&hr1,&min1);
   scanf("%d %d",&hr2,&min2);
   hr1=hr1-hr2;
   min1=min1-min2;
   hr=abs(hr1);
   min=abs(min1);
   printf("%d %d",hr,min);
   return 0;
}
