// write a programe to print following pattern
// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
// 1  4  7   10  13  16  19  22  25  28  31
#include <stdio.h>
void main()
{
     int number1 = 1;
     int answer = 0;
     int temp = 4;
     int three = 3;
     printf("%d ", number1);
     answer = number1 + temp;

     while(answer < 3000)
     {
          printf("%d ", answer);
          temp = temp + three;
          answer = answer + temp;
     }

     // printf("%d ", answer);
     // temp = temp + three;
     // answer = answer + temp;
     // printf("%d ", answer);
     // temp = temp + three;
     // answer = answer + temp;
     // printf("%d ", answer);
     // temp = temp + three;
     // answer = answer+ temp;
     // printf("%d ", answer);
}