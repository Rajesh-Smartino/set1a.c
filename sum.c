#include<stdio.h>
int main()
{
 int a;
  printf("Enter the number : ");
  scanf("%d",&a);
  if(a>0)
{
printf(" Number : Positive ");
}
else if(a==0)
{
 printf(" Number : ZERO ");
}
else
{
printf(" Number : Negative");
}
return 0;
}