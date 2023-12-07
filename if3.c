// Write a programe to findout wether the given number is even or not
#include <stdio.h>
void main()
{
     int number = 0;

     printf("Enter value of number  ");
     scanf("%d", &number);

     if(number % 2 == 0 )
     {
          printf("The number is even ");
     }

     printf("Goodbyee...");
}