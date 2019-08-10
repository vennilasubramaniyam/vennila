#include <stdio.h>

int main()
{
  int n,integer1=0,rem,integer2;
  printf("Enter the integer:");
  scanf("%d",&n);
  integer2=n;
  while(n!=0)
  {
      rem=n%10;
      integer1=integer1*10+rem;
      n/=10;
  }
    if(integer2==integer1)
    printf("%d is a palindrome",integer2);
    else
    printf("%d is not a palindrome",integer2);
    return 0;
}
