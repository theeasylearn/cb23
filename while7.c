// Write a programe to print a to z using numbers using ascii chart 
// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <stdio.h>
void main()
{
     int number = 65;

     while(number <= 90)
     {
          printf("%c ", number);
          number = number + 1;
     }
     // printf("%c ",number);
     // number = number + 1;
     // printf("%c ",number);
     // number = number + 1 ;
     // printf("%c ",number);
}