#include <stdio.h>
#include <math.h>

int main()
{
    int s,e,i,flag=0;
    scanf("%d %d",&s,&e);
    s=s+1;
    while(s<e)
    {
        flag=0;
        for(i=2;i<=s/2;++i)
    {
        if(s%i==0)
        {
        flag=1;
        break;
        }
        
    }
    if(flag==0)
        printf("%d ",s);
        ++s;
    }
     return 0;
}
