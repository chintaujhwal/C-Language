#include <stdio.h>
void main()
{
int a[3][3],i,j;
srand(time(0));
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
            a[i][j]=rand()%10;

    printf("%3d",a[i][j]);
    }
    printf("\n");
}

}
