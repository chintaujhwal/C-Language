#include <stdio.h>
void main()
{
int a,b,c,temp;

printf("a :");
scanf("%d",&a);
printf("b :");
scanf("%d",&b);
printf("c :");
scanf("%d",&c);

temp = a;
a = b;
b = c;
c = temp;

printf("the values of a,b,c are : %d%d%d",a,b,c);
}
