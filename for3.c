// Write a programe to print hollow inverted half pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0;
     int space = 0;
     int flash = 0;
     int temp = 5;
     for (count = 0; count < 8; count++)
     {
          printf("*");
     }

     for(flash = 0 ; flash < 6 ; flash++)
     {
          printf("\n");
          printf("*");
          for (space = 0; space < temp; space++)
          {
               printf(" ");
          }
          printf("*");
          temp--;
     }
     printf("\n");
     printf("*");
     // for (space = 0; space < 4; space++)
     // {
     //      printf("_");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // for(space = 0 ; space < 3 ; space++)
     // {
     //      printf("_");
     // }
     // printf("*");
}