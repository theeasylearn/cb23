// Example of function
#include <stdio.h>
void printLine(char symbol, int number)
{
     int count = 0;
     printf("\n");
     for (count = 0; count < number; count++)
     {
          printf("%c", symbol);
     }
     printf("\n");
}

void main()
{

     char sign = ' ';
     int number = 0;
     printf("Enter symbol to print ");
     scanf("%c", &sign);
     printf("Enter value of number ");
     scanf("%d", &number);

     printf("Param patel");
     printLine(sign, number);
     printf("Hello world ");
}