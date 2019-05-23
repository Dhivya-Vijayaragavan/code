#include <stdio.h>

int main()
{
    int n,f=1,s=1,i,temp;
    scanf("%d",&n);
    if(n>0)
    {
      for(i=0;i<n;i++)
    {
       printf("%d ",f);
        temp = f + s;
        f = s;
        s = temp;
    }   
    }
    else
    {
        printf("enter positive number");
    }
   
    return 0;
}
