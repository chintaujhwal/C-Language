#include <stdio.h>
void main()
{
int i;
int marks[10-1] = {10,20,30,40,50,60,70,80,90,100};
{
printf("index number :");
scanf("%d",&i);
}
if(i>10)
printf("invalid index number");
else
if(marks[i-1]>50)
printf("marks in index %d are %d",i,marks[i-1]);
else
printf("marks you have asked are less than 50");
}

