#include <stdio.h>
void main()
{
 int i, wrong = 0;

  int a[] = {10,20,30,35,50};
  int b[] = {10,20,30,40,50};

for(i=0; i < 5; i++)
  {
     if (a[i] != b[i])
     {
        printf("Elements didn't match at %d position",i);
        wrong = 1;
        break;
     }
  }

  if(!wrong)
     printf("Elements are same!");
}
