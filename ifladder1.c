// Write a programe to findout greater number outof given 2 numbers
#include <stdio.h>
void main()
{
     int number1 = 0, number2 = 0;

     printf("Enter value of number1 ");
     scanf("%d", &number1);
     printf("Enter value of number2 ");
     scanf("%d", &number2);

     if (number1 > number2)
     {
          printf("Number 1 is greater ");
     }
     else if (number1 == number2)
     {
          printf("Number 1 and number 2 both are same ");
     }
     else
     {
          printf("Number 2 is greater ");
     }
}