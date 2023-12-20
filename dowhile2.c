// Write a programe to print multiplication table of 5
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
#include <stdio.h>
void main()
{

     int table = 5;
     int count = 1;
     int answer = 0;

     printf("Enter value of table ");
     scanf("%d", &table);
     do
     {
          answer = table * count;
          printf("\n%d x %d = %d ", table, count, answer);
          count++;
     } while (count <= 10);
     // answer = table * count;
     // printf("\n%d x %d = %d ", table, count, answer);
     // count++;
     // answer = table * count;
     // printf("\n%d x %d = %d ", table, count, answer);
     // count++;
     // answer = table * count;
     // printf("\n%d x %d = %d ", table, count, answer);
     // count++;
     // answer = table * count;
     // printf("\n%d x %d = %d ", table, count, answer);
}