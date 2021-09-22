#include <stdio.h>
void main()
{
    int x,y;
    printf("enter a value for X :");
    scanf("%d",&x);
    printf("enter a value for Y :");
    scanf("%d",&y);

    if (x>y)
        y = x;
    else
        x = y;

    printf("the value's of X and Y are : %d and %d",x,y);
}
