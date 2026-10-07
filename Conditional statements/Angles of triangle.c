#include<stdio.h>
void main()
{
int a;
printf("Enter any angle: ");
scanf("%d",&a);
if(a>0 && a<90)
{
printf("Acute angle");
}
else if(a==90)
{
printf("Right angle");
}
else if(a>90 && a<180)
{
printf("Obtuse angle");
}
else if(a==180)
{
printf("Straight angle");
}
else if(a>180 && a<=360)
{
printf("Reflex angle");
}
else if(a==360)
{
printf("Complete angle");
}
else
{
printf("Wrong input");
}
}
