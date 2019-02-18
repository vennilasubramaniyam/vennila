#include <stdio.h>

int main()
{
char c;
printf("enter the value c=");
scanf("%c",&c);
if(c>='a'&& c<='z'||c>='A'&& c<='Z')
{
    printf("c is a alphabet");
}
else
{
    printf("c is not a alphabet");
}

   return 0;
}
