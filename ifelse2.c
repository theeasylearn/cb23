// Write a programe to findout smaller number from given 2 number
#include <stdio.h>
void main()
{
     int number1 = 0;
     int number2 = 0;

     printf("Enter value of number1 ");
     scanf("%d", &number1);
     printf("Enter value of number2 ");
     scanf("%d", &number2);

     if (number1 < number2)
     {
          printf("Number 1 is smaller ");
     }
     else
     {
          printf("Number 2 is smaller ");
     }

     printf("\nGoodbyee..");
}