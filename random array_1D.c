void main()
{
int a[5],i;
srand(time(0));
printf("array\n");
for(i=0;i<5;i++)
{
a[i]=rand()%100;
printf("%d\t",a[i]);
}
}
