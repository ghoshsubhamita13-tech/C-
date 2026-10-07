#include<stdio.h>
void main()
{
int n;
printf("Enter any number: ");
scanf("%d",&n);
if(n==0)
{
printf("Whole number");
}
else if (n>0)
{
printf("Both whole and natural numbers ");
}
else
{
printf("Neither");
}
}
