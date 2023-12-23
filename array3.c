// Write a programe to take name as input from user
#include <stdio.h>
void main()
{
     char name[25];
     int count = 0;
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
     for(count = 0 ; count < 25  ; count++)
     {
          printf("%c", name[count]);
          if(name[count] == '\n')
          {
               break;
          }
     }
     // printf("%c",name[1]);
     // printf("%c",name[2]);
     // printf("%c",name[3]);
     // printf("%c",name[4]);
     // printf("%c",name[5]);
     // printf("%c",name[6]);
     // printf("%c",name[7]);
     // scanf("%c",&name[1]);
     // scanf("%c",&name[2]);
     // scanf("%c",&name[3]);
     // scanf("%c",&name[4]);
     // scanf("%c",&name[5]);
     // scanf("%c",&name[6]);
     // scanf("%c",&name[7]);
}