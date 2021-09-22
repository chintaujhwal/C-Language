#include <stdio.h>
void main()
{
char operator;
double firstnumber,secondnumber;

printf("Enter an Operator :");
scanf("%c",&operator);

printf("Enter first operand  :");
scanf("%lf",&firstnumber);

printf("Enter second operand :");
scanf("%lf",&secondnumber);

switch(operator)
{
case '+' :
printf("%lf+%lf=%lf",firstnumber,secondnumber,firstnumber+secondnumber);
break;

case '-' :
printf("%lf-%lf=%lf",firstnumber,secondnumber,firstnumber-secondnumber);
break;

case '*' :
printf("%lf*%lf=%lf",firstnumber,secondnumber,firstnumber*secondnumber);
break;

case '/' :
printf("%lf/%lf=%lf",firstnumber,secondnumber,firstnumber/secondnumber);
break;
default:
    printf("Error!");
}
}
