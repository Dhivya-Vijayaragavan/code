#include <stdio.h>

int main()
{
   int start,end,i;
   scanf("%d %d",&start,&end);
   if(start<end)
   {
       for(i=start+1;i<end;i++)
   {
       if(i%2==1)
       {
       printf(" %d",i);
       printf(" ");
       }
   }   
   }
   else
   {
       printf("give valid boundary");
   }
   
    return 0;
}
