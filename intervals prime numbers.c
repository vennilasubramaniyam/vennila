#include <stdio.h>
int main()
{
    int low, high, i, num;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
    while (low<high)
    {
        num = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                num= 1;
                break;
            }
        }
        if (num == 0)
            printf("%d ", low);
        ++low;
    }
    return 0;
}
