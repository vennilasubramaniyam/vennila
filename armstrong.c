/*
 * C Program to Check whether a given Number is Armstrong
 */
#include <stdio.h>
#include <math.h>
 
void main()
{
    int n, sum = 0, rem = 0, cube = 0, temp;
 
    printf ("enter a number");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem =n % 10;
        cube =pow(rem, 3);
        sum =sum + cube;
        n =n/ 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong number");
    else
        printf ("The given no is not a armstrong number");
}
