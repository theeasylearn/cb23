// Write a programe to print following pattern inverted half pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0;
     int flash = 0;
     int temp = 6;

     while(flash < 6)
     {
          while (count < temp) 
          {
               printf("*");
               count = count + 1;
          }
          printf("\n");
          temp = temp - 1 ;
          count = 0;
          flash = flash + 1 ;
     }
     // printf("\n");
     // printf("*");
     // while (count < 5)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 3)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 2)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
}