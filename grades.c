#include<stdio.h>
void main()
{
int a,b;
printf("enter the value of A :");
scanf("%d",&a);
printf("enter the value of B :");
scanf("%d",&b);

if (a>80&&b>80)
printf("Grade 1");
else
if (a>80&&b<=80)
printf("Grade 2");
else
if (a<=80&&b>80)
printf("Grade 3");
else
printf("Grade 4");

}
