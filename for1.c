// Write a programe to print squares of number till 100
#include <stdio.h>
void main()
{
     int number = 1;
     int answer = 0;

     for (answer = 0; number <= 100; number = number + 1)
     {
          answer = number * number;
          printf("%d ", answer);
     }
     // answer = 0 ;
     // while (number <= 100)
     // {
     //      answer = number * number;
     //      printf("%d ", answer);
     //      number = number + 1 ;
     // }
     // 2
     // answer = number * number;
     // printf("%d ",answer);
     // number = number + 1 ; // 3
     // answer = number * number ;
     // printf("%d ",answer);
     // number = number + 1 ;
     // answer = number * number ;
     // printf("%d ",answer);
}