#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(isdigit(a))
    {
        printf("Yes");
    }
    else
    {
    printf("No");
    }
    return 0;
}
