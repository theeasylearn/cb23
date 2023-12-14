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
     answer2 = answer + second;
     printf("%d ",answer2);
     answer3 = answer2 + answer;     
     printf("%d ",answer3);
     answer3 = answer3 + answer2;
     printf("%d ",answer3);
     answer3 = answer3 + answer2 ;



     // printf("%d ", answer);
     // answer = answer + first + second;
     // printf("%d ", answer);
     // answer = answer + first + second;
     // printf("%d ", answer);
}