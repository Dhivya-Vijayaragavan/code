#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(isdigit(a))
    {
        printf("yes");
    }
    else
    {
    printf("no");
    }
    return 0;
}
