#include <stdio.h>

int main()
{
    float num;
    printf("Enter the Number:");
    scanf("%f",&num);
    if(num>0)
    printf("The Given Number is Positive");
    else if(num<0)
    printf("The Given Number is Negative");
    else
    printf("The Given Number is Zero");
    return 0;
}
