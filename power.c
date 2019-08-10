#include <stdio.h>
int main()
{
    int number, exponent;
    long long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &number);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        result *= number;
        --exponent;
    }
    printf("Answer = %lld", result);
    return 0;
}
