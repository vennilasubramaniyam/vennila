#include <stdio.h>

void main()

{

    int num,n1,n2;
    printf("Enter the n1 and n2 values:");
    scanf("%d%d",&n1,&n2);
    printf("Print Odd Numbers in a given range n1 to n2:");
    for (num =2; num <= n2; num++)
    {

       if (num % 2 == 1)

         printf ("%d ", num);

         }

}
