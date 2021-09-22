int time(int a,int b,int c)
{
return a*3600+b*60+c;
}
main()
{
int h,m,s,seconds;
printf("Enter Hours   :");
scanf("%d",&h);
printf("Enter Minutes :");
scanf("%d",&m);
printf("Enter Seconds :");
scanf("%d",&s);

seconds=time(h,m,s);
printf("%d",seconds);
}

