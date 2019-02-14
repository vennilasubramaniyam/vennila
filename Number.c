#include <stdio.h>

int main()
{
    int number;
    printf("enter a number to check the number is positive or negative or zero\n");
    scanf("%d",&number);
    if(number>0)
    {
        printf("is positive");
    }
    else if(number<0)
    {
        printf("is negative");
    }
    else
    {
        printf("is zero");
    }
return 0;
}
