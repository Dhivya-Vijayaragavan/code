#include <stdio.h>

int main()
{
   float x,y,z,largest;
   scanf("%f %f %f",&x,&y,&z);
   largest=(x>y?(x>z?x:z):(y>z?y:z));
   printf("%f",largest);
    return 0;
}
