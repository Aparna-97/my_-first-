#include<stdio.h>
int main()
{  
   int n;
   char name;
   printf("enter ur name");
   scanf("%s",&name);
   printf("enter ur coolness rating\n");
   scanf("%d",&n);
   if(n>7)
   {
     printf("you are cool %s",&name);
   }
   else
     printf("better luck next time %s",&name);
}
