#include <stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    ch=getchar();
    if(isalpha(ch)>0)
    printf("Alphabet");
    else
    printf("No");
    return 0;
}
