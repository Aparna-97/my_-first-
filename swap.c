#include<stdio.h>
int main()
{
int a,b;
printf("enter a and b");
scanf("%d %d",&a,&b);
a^=b^=a^=b;
printf("a=%d\n b=%d\n",a,b);
}
