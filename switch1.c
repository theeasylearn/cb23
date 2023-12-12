// Write a programe to findout how many days given month has
#include <stdio.h>
void main()
{
     int month = 0;

     printf("Enter value of month ");
     scanf("%d", &month);

     switch (month)
     {
     case 1:
          printf("It has 31 days ");
          break;

     case 2:
          printf("It has 28 or 29 days ");
          break;

     case 3:
          printf("It has 31 days ");
          break;

     case 4:
          printf("It has 30 days ");
          break;

     case 5:
          printf("It has 31 days ");
          break;

     case 6:
          printf("It has 30 days");
          break;

     case 7:
          printf("It has 31 days ");
          break;

     case 8:
          printf("It has 31 days ");
          break;

     case 9:
          printf("It has 30 days ");
          break;

     case 10:
          printf("It has 31 days ");
          break;

     case 11:
          printf("It has 30 days ");
          break;

     case 12:
          printf("It has 31 days");
          break;

     default:
          printf("Invalid month ");
          break;
     }
}