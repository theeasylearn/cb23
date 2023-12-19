#include <stdio.h>
void main()
{
     int flash = 0;
     int count = 0;
     int size = 0;
     printf("Enter size of triangle ");
     scanf("%d", &size);
     for (flash = 1; flash < size; flash++)
     {
          for (count = 1; count < flash + 1; count++)
          {
               printf("%d ", count);
          }
          printf("\n");
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