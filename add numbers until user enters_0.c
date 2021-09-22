#include <stdio.h>
void main()
{
double number,sum=0;
do
{
printf("enter a number :");
scanf("%lf",&number);
sum+=number;
}
while(number !=0.0);
printf("Sum is %lf",sum);
}
