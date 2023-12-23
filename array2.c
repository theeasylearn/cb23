// Write a programe to take 5 students marks and find total and average for all
#include <stdio.h>
void main()
{
     int marks[5];
     int count = 0;
     int total = 0;
     float average = 0 ;
     for (count = 0; count < 5; count++)
     {
          printf("Enter marks for student %d ", count + 1);
          scanf("%d", &marks[count]);
     }
     for (count = 0; count < 5; count++)
     {
          printf("\nMarks for student %d = %d ", count + 1, marks[count]);
     }
     for(count = 0 ; count < 5 ; count++)
     {
          total = total + marks[count];
     }
     printf("\nThe value of answer is %d ", total);
     average = total / 5 ;
     printf("\nThe value of average is %f ",average);
     // total = total + marks[1];
     // total = total + marks[2];
     // total = total + marks[4];
     // total = total + marks[3];

     // printf("Marks for student 3 = %d ",marks[2]);
     // printf("Marks for student 4 = %d ",marks[3]);
     // printf("Marks for student 5 = %d ",marks[4]);
     // printf("Enter mark for student 2 ");
     // scanf("%d",&marks[1]);
     // printf("Enter marks for student 3");
     // scanf("%d",&marks[2]);
     // printf("Enter marks for student 4");
     // scanf("%d",&marks[3]);
     // printf("Enter marks for student 5");
     // scanf("%d",&marks[4]);
}