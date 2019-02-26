#include <stdio.h>

int main()
{
    int i,j,k,n,sum=0;
    printf("Enter the N value:");
    scanf("%d%d",&n,&k);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",n);
    }
    for(j=0;j<=k;j++)
    {
    sum=sum+j;
    }
    printf("sum value:%d",sum);
    return 0;
}
