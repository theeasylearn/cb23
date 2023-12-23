// Write a programe to store and print 5 students marks
#include <stdio.h>
void main()
{
     int marks[5];
     int count = 0;
     for (count = 0; count < 5; count++)
     {
          printf("Enter marks for student %d ", count + 1);
          scanf("%d", &marks[count]);
     }
     for(count = 0 ; count < 5 ; count++)
     {
          printf("\nMarks for student %d = %d ",count+1,marks[count]);
     }
     // printf("Enter marks for student 2 ");
     // scanf("%d",&marks[1]);
     // printf("Enter marks for student 3 ");
     // scanf("%d",&marks[2]);
     // printf("Enter marks for student 4 ");
     // scanf("%d",&marks[3]);
     // printf("Enter marks for student 5 ");
     // scanf("%d",&marks[4]);
     // printf("\nMarks for student 2 = %d", marks[1]);
     // printf("\nMarks for student 3 = %d", marks[2]);
     // printf("\nMarks for student 4 = %d", marks[3]);
     // printf("\nMarks for student 5 = %d", marks[4]);
}