#include <stdio.h>
void main()
{
int i,j,k,l,a;

printf("enter a value :");
scanf("%d",&a);

    for(i=0;i<=a;i++)
    {
    printf("\n");
    for(j=0;j<=i;j++)
            {
            printf("%d  ",j);
            }
    }

    for(k=a;k>=0;k--)
    {
    printf("\n");
    for(l=0;l<=k;l++)
            {
            printf("%d  ",l);
            }
    }


}
