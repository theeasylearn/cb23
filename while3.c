// Write a programe to print following pattern
// 1 8 27 64 125.... 10000
#include <stdio.h>
void main()
{
     int number = 1;
     int answer = 0;

     printf("%d ", number);

     // while(answer < 9261)
     while(number < 21)
     {
          number = number + 1;
          answer = number * number * number; 
          printf("%d ", answer);
     }

     // number = number + 1; // 2 + 1 = 3
     // answer = number * number * number; // 3 * 3 * 3 = 27
     // printf("%d ",answer);//27
     // number = number + 1 ;
     // answer = number * number * number;
     // printf("%d ",answer);//64
     // number = number + 1 ;
     // answer = number * number * number;
     // printf("%d ",answer);//125
}