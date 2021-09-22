#include <stdio.h>
void main()
{
bottom();
top();
printf("\nAVENGERS\n");
bottom();
top();
printf("\nAVENGERS AGE OF ULTRON\n");
bottom();
top();
printf("\nAVENGERS INFINITY WAR\n");
bottom();
top();
printf("\nAVENGERS ENDGAME\n");
bottom();
top();

}
top()
{
int i;
for(i=1;i<=10;i++)
putch('<');
}
bottom()
{
int j;
for(j=1;j<=10;j++)
putch('>');
}
