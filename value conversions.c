#include <stdio.h>
void main()
{
float inches,cm,mm;
printf("enter inches :");
scanf("%f",&inches);
cm = 2.5*inches;
mm = 10*cm;
printf("values in centi and milli : %f and %f",cm,mm);
}
