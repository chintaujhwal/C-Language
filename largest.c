// to show the largest number
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value of A :");
scanf("%d",&a);
printf("enter the value of B :");
scanf("%d",&b);
printf("enter the value of C :");
scanf("%d",&c);

if (a>b&&a>c)
printf("a");
else
if (b>a&&b>c)
printf("b");
else
printf("c");
}
