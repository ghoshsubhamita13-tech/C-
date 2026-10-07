#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter the three sides: ");
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && y==z && z==x)
{
    printf("The triangle is equilateral");
}
else if ((x==y && y!=z) || (y==z && z!=x)  || (x==z && x!=y))
{
    printf("The triangle is isoceles");
}
else
{
    printf("The triangle is scalene");
}
}
