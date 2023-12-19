#include <stdio.h>
void main()
{
     int flash = 0;
     int count = 0;
     int number = 1;
     for(flash = 1; flash < 6; flash++)
     {
          for (count = 0; count < flash; count++)
          {
               printf("%d ",number);
               number++;
          }
          printf("\n");
          number=1;
     }
     // for (count = 0; count < 4; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for(count = 0 ; count < 5 ; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
}