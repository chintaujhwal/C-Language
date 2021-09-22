#include <stdio.h>
main()
{
char ch,password[10];
int i,upper=0,digit=0,special=0;

printf("Enter password :");

for(i=0;i<6;i++)
    {
    ch=getch();
    password[i]=ch;
    putch('*');
    if (isupper(ch))
              upper = 1;
    else
    if (isdigit(ch))
              digit = 1;
    else
    if (!islower(ch))
              special = 1;
    }

    if(!upper)
        printf("\nUppercase letter is missing!");

    if(!digit)
        printf("\nDigit is missing!");

    if(!special)
        printf("\nSpecial character is missing!");

    if (upper && digit && special)
    {
       // display password
       printf("\nPassword : ");
       for(i=0; i < 6; i++)
          putch(password[i]);
    }
}

