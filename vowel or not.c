
#include <stdio.h>

int main()
{
int ch;
printf("enter the alphabet");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
    printf("ch is a vowel");
}
else
{
    printf("ch is a constant");
}

   return 0;
}
