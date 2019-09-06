#include<stdio.h>
int fact(int a)
{
  int b=1;
  for(int i=1;i<=a;i++)
   {
     b=i*b;
   }
  return b;
}
int main()
{
int x,f;
printf("enter the number");
scanf("%d",&x);
f=fact(x);
printf("factorial=%d",f);
}
