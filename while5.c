// Write a programe to print following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include <stdio.h>
void main()
{
     int first = 2;
     int second = 1;
     int answer = 0;
     printf("%d ", first);
     printf("%d ", second);

     while( answer < 1364 )
     {
          answer = first + second;
          first = answer;
          printf("%d ", answer);

          answer = answer + second;
          second = answer;
          printf("%d ", answer);
     }

     // answer = first + answer ;
     // first = answer ;
     // printf("%d ",answer);// 3 + 4

     // answer = second + answer ;
     // second = answer ;
     // printf("%d ",answer);// 7 + 4

     // answer = first + answer;
     // printf("%d ",answer);// 7 + 11

     // answer = second + answer;
     // printf("%d ",answer);// 18 + 11
}
