#include <stdio.h>
void main()
{
int i,num;
int a[10] = {10,20,30,10,50,60,70,10,90,100};

printf("enter a number :");
scanf("%d",&num);

for(i=0;i<10;i++)
{
    if(num==a[i])

        printf("found at %d\n",i);
    else
        printf("not found at %d\n",i);

}

}
