#include <stdio.h>
void main()
{
int a[3][3],b[3][3],i,j;
srand(time(0));

// Fill and print matrix A

printf("\nMatrix A\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    a[i][j]=rand()%10;
    printf("%3d",a[i][j]);
    }
    printf("\n");
}

// Fill and print matrix B

printf("\nMatrix B\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    b[i][j]=rand()%10;
    printf("%3d",b[i][j]);
    }
    printf("\n");
}

printf("\nMatrix Addition (A+B)\n");

for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
         printf("%3d",a[i][j]+b[i][j]);
        }
    printf("\n");
    }
}
