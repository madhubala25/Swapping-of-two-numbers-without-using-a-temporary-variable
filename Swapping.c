#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b;
   printf("Enter a,b:");
   scanf("%d%d",&a,&b);
   printf("Before swap: %d %d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("After swap: %d %d",a,b);
   return 0;
}
