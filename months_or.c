#include <stdio.h>
void main()
{
int N;
printf("enter the number of required month :");
scanf("%d",&N);
if (N == 2)
printf("no of days : 28");
else
if (N == 4||N == 6||N == 9||N == 11)
printf("no of days : 30");
else
printf("no of days : 31");

}
