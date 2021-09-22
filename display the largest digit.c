#include <stdio.h>
void main()
{
int num,largest=0,digit=0;
printf("enter your input :");
scanf("%d",&num);

while (num>0)
{
digit=num%10;
if (digit>largest)
{
largest=digit;
}
num/=10;
}
printf("The largest digit in your input is %d\n",largest);
}
