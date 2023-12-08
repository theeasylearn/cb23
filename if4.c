// Write a program to accept month number from user. display message "this month has 28 or 29 days" if month if february
#include <stdio.h>
void main()
{
     int month = 0;

     printf("Enter value of month ");
     scanf("%d", &month);

     if (month == 2)
     {
          printf("This month has 28 or 29 days ");
     }

     printf("Goodbyee..");
}