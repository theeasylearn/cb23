// write a program to findout power of given number using given exponent
#include <stdio.h>
void main()
{
     int base = 0;
     int power = 0;
     int answer = 0;
     int count = 0;
     printf("Enter value of base ");
     scanf("%d",&base);
     printf("Enter value of power ");
     scanf("%d",&power);
     // base = 3;
     // power = 5;

     // answer = base * base * base * base * base ;
     answer = base * base; // 9
     for (count = 2 ; count < power; count++)
     {
          answer = answer * base;
     }
     printf("The value of answer is %d ", answer);
}