#include <stdio.h>
main()
{
FILE *fp;
char fn[20];
int ch;

printf("Enter filename :");
gets(fn);

//open file for reading

fp = fopen("fn","r");
if(fp==NULL)
{
printf("File %s not found",fn);
exit(1);
}

//read contents
while(!feof(fp))
{
    ch = fgetc(fp);
    putchar(ch);
}
fclose(fp);
}
