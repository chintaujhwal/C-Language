#include <stdio.h>
void main()
{
int a,b,temp;
printf("a :");
scanf("%d",&a);
printf("b :");
scanf("%d",&b);

printf("Orignal Values\n");
printf("A = %d\n",a);
printf("B = %d\n",b);


temp=a;
a=b;
b=temp;


printf("Swapped Values\n");
printf("A = %d\n",a);
printf("B = %d\n",b);

}

