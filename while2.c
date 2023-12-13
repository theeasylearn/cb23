// Write a programe to print -1 to -5000 numbers
#include <stdio.h>
void main()
{
     int number = -1;

     while(number > -5001)
     {
          printf("%d , ", number);
          number = number - 1;
     }
     // printf("%d", number);
     // number = number + 1;
     // printf("%d", number);
     // number = number + 1;
     // printf("%d", number);
}