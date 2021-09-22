#include <conio.h>
void main()
{
    char name[5];
    int i;
    printf("what's your name ?");
    gets(name);
    for (i=0;i<5;i++)
        puts(name);
}
