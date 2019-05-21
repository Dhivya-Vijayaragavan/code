#include <stdio.h>
#include <math.h>

int main()
{
   int start,end,i;
   scanf("%d %d",&start,&end);
    for(i=start+1;i<end;i++)
   {
       if(i%2==1)
       {
       printf(" %d",i);
       printf(" ");
       }
   }   
   
    return 0;
}
