#include <stdio.h>
void main()
{
float salary,net,HRA,DA;
printf("enter basic income :");
scanf("%f",&salary);
HRA = salary*30/100;
DA = salary*20/100;
net = HRA+DA+salary;
printf("HRA :%f\n",HRA);
printf("DA :%f\n",DA);
printf("net :%f\n",net);
}
