// Write a programe to take username in input and print in reverse
// param
// marap
#include <stdio.h>
void main()
{
     char name[25];
     int count = 0;
     int temp = 0;
     printf("Enter your name ");
     for (count = 0; count < 25; count++)
     {
          scanf("%c", &name[count]);
          if (name[count] == '\n')
          {
               break;
          }
     }
     printf("Your name is ");
     for (temp = 0; temp < count + 1; temp++)
     {
          printf("%c", name[count - temp]);
     }
}