#include<stdio.h>
#include<math.h>

int main() 
{
    int num,temp,flag=0;
    scanf("%d",&num);
    temp=num;
    while(temp!=1)
    {
        if(temp%2!=0)
        {
            flag=1;
            break;
        }
        else
        {
            temp=temp/2;
        }
    }
    if(flag==0)
    {
        printf("yes");
    }else
    printf("no");

    return 0;
}
