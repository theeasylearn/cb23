// Write a programe to print following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include <stdio.h>
void main()
{
     int first = 2;
     int second = 1;
     int answer = 0;
     int answer2 = 0;
     int answer3 = 0;
     printf("%d ", first);
     printf("%d ", second);
     answer = first + second;
     printf("%d ", answer);
     answer = answer + second;
     printf("%d ", answer);
     answer = answer + second + first;
     printf("%d ", answer);
     answer = answer + second + first + second;
     printf("%d ", answer);
     answer = answer 

     // printf("%d ", answer);
     // answer = answer + first + second;
     // printf("%d ", answer);
     // answer = answer + first + second;
     // printf("%d ", answer);
}