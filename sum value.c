#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter the N value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("sum of natural values:%d",sum);
    return 0;
}
