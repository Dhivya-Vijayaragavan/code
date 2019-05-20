int main()
{
   int count=0;
   long num;
   scanf("%ld",&num);
   if(num==0)
   {
       printf("1");
   }
   else
   {
   while(num!=0)
   {
        num=num/10;
        count=count+1;
   }
   printf("%d",count);
   }
   
    return 0;
}
