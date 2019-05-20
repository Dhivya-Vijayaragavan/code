#include <stdio.h>

int main()
{
    char c;
    c=getchar();
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("Vowel");
        else
        printf("Consonant");
    }
    else
    printf("invalid");
    return 0;
}
