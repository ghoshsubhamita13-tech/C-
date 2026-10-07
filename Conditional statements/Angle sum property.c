#include<stdio.h>
void main()
{
int x,y,z;
printf("Enter the three angles: ");
scanf("%d %d %d",&x,&y,&z);
if(x+y+z==180 && x!=0 && y!=0 && z!=0)
{
printf("Satisfies the angle sum property of the triangle");
}
else
{
printf("Does not satisfy");
}
}
