#include<stdio.h>
void mul(int a[][],int b[][])
{
  int i,j;
  printf(" the multiplication of two matrixes are \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d",a[i]*b[j]);
    }
  printf("\n");
  }
}

int main()
{
 int a[3][3],b[3][3];

 int i,j;
 printf("Enter the elements for matrix A");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     scanf("%d",&a[i][j]);
   }
 }
for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     printf("%d",a[i][j]);
   }
printf("\n");
 }
 printf("Enter the elements for matrix B");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     scanf("%d",&a[i][j]);
   }
 }
for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     printf("%d",a[i][j]);
   }
printf("\n");
 }
mul(a,b);
}
