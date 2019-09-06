#include<stdio.h>
int main()
{
   int a;
   printf("enter a choice between 0 t0 4\n");
   scanf("%d",&a);
   switch(a)
     {
       case 1:
       printf("yes ur choice is right..virat is the captain");
       break;
       case 2:
       printf("no ur choice is wrong..dhoni is previous captain");
       break;
       case 3:
       printf("no ur choice is wrong..dhawan is a batsman");
       break;
       case 4:
       printf("no ur choice is wrong...jadeja is a player");
       break;
       default:
       printf("please enter a valid number");
     }

}
