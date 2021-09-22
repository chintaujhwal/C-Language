#include <stdio.h>

void main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int left,mid,right,x;

int size_a = sizeof(a)/sizeof(a[0]);
left = 0;
right = size_a - 1;
mid = (left+right)/2;

printf("Enter a number: ");
scanf("%d",&x);

if(x==a[mid])
printf("found");
else if(x < a[mid])
BinarySearch(a,left,mid,x);
else if(x > a[mid])
BinarySearch(a,mid,right,x);
}

int BinarySearch(int a[],int left,int right,int x)
{
int i,flag=0;
for(i=left; i<=right; i++)
 {
 if (x == a[i])
 flag=1;
 }

 if(flag == 1)
    printf("found");
 else
    printf("not found");
}

