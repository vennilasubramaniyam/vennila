#include<stdio.h>
int main()
{
int i,n,flag=0;
printf("Enter the positive integer:");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(n==1)
{
printf("! is a neither a prime nor composite number");
}
else if(flag==0)
{
printf("%d is a prime number");
}
else
{
printf("%d is not a prime number");
}
return 0;
}
