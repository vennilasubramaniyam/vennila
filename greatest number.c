#include <stdio.h>

int main()
{
int a,b,c;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
if(a>b && a>c)
{
    printf("a is a biggest value");
}
else if(b>c)
{
    printf("b is a biggest value");
}
else
{
   printf("c is a biggest value");
}
    return 0;
}
