void main()
{
int a[10],i,temp;
srand(time(0));
printf("\nbefore\n");

for(i=0;i<10;i++)
{
    a[i]=rand()%100;
    printf("%d\t",a[i]);
}
for(i=0;i<5;i++)
{
    temp=a[i];
    a[i]=a[9-i];
    a[9-i]=temp;
}
printf("\nafter\n");
for(i=0;i<10;i++)
{
    printf("%d\t",a[i]);
}
}

