#include <stdio.h>

int main()
{
   int x,y,z,largest;
   scanf("%d %d %d",&x,&y,&z);
   largest=(x>y?(x>z?x:z):(y>z?y:z));
   printf("%d",largest);
    return 0;
}
