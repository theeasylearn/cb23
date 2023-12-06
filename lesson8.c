// 7) write a program to findout sell price from production price, profit rate, tax rate.
#include <stdio.h>
#include <conio.h>
void main()
{
     clrscr();
     int price = 0;
     float profit_rate = 0, tax_rate = 0;
     float total_profit = 0, total_tax = 0;
     float sell_price = 0;
     printf("Enter value of price ");
     scanf("%d", &price);
     printf("Enter value of profit rate ");
     scanf("%f", &profit_rate);
     printf("Enter value of tax rate ");
     scanf("%f", &tax_rate);

     printf("The value of price is %d and value of profit rate is %.2f and tax rate is %.2f ", price, profit_rate, tax_rate);

     total_profit = price * profit_rate / 100;
     total_tax = price * tax_rate / 100;

     printf("\nThe value of total profit is %.2f and total tax is %.2f ", total_profit, total_tax);

     sell_price = price + total_profit + total_tax;

     printf("\n\nThe value of Sell price is %.2f ", sell_price);
}