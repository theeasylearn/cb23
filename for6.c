// Write a programe to print full invereted pyramid
#include <stdio.h>
void main()
{
     int count = 0;
     int flash = 0;
     int temp = 0;
     int space = 2;
    
     for (temp = 6; temp > 0; temp--)
     {
          printf("\n");
          for (flash = 0; flash < space; flash++)
          {
               printf(" ");
          }
          space++;
          for (count = 0; count < temp; count++)
          {
               printf("*");
               printf(" ");
          }
     }

     // for (count = 0; count < 4; count++)
     // {
     //      printf("*");
     //      printf(" ");
     // }
     // printf("\n");
     // for (flash = 0; flash < 3; flash++)
     // {
     //      printf(" ");
     // }
     // for (count = 0; count < 3; count++)
     // {
     //      printf("*");
     //      printf(" ");
     // }
     // printf("\n");
     // for (flash = 0; flash < 4; flash++)
     // {
     //      printf(" ");
     // }
     // for (count = 0; count < 2; count++)
     // {
     //      printf("*");
     //      printf(" ");
     // }
     // printf("\n");
     // for(flash = 0 ; flash < 5 ; flash++)
     // {
     //      printf(" ");
     // }
     // printf("*");
}