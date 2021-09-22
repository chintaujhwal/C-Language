#include <stdio.h>
void main()
{
int number;
long long factorial;
printf("enter a Number :");
scanf("%d",&number);
factorial = 1;
while (number>0)
{
factorial*=number;
--number;
}
printf("Factorial is %lld",factorial);
}
