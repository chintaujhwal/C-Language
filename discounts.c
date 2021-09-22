#include <stdio.h>
void main()
{
int price,qty,amount;
printf("enter the price :");
scanf("%d",&price);
printf("enter the quantity :");
scanf("%d",&qty);

if (qty>3)
    price = price*0.80;
    else
    if (qty>2)
    price = price*0.85;
    else
    price = price*0.90;
    amount = price/qty;
    if(amount>10000)
    amount = amount*0.9;
    printf("net amount : %d",amount);
}
