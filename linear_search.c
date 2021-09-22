#include <stdio.h>

void main()
{
int x,a[]={1,2,3,4,5,6,7,8,9,10};
int i,flag=0;

int size_a = sizeof(a)/sizeof(a[0]);

printf("Enter a number: ");
scanf("%d",&x);

for(i=0; i<size_a; i++)
{
if (a[i] == x)
flag=1;
}

if(flag == 1)
    printf("found");
else
    printf("not found");
}
