// Write a programe to I/O in multi array
#include <stdio.h>
void main()
{
     int students[5][5];
     int count = 0;
     int flash = 0;

     while (flash < 5)
     {
          printf("\nEnter marks for student %d \n", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("Enter marks of subject %d ", count + 1);
               scanf("%d", &students[flash][count]);
          }
          flash++;
     }

     for (flash = 0; flash < 5; flash++)
     {
          printf("\nMarks for student %d ",flash+1);
          for (count = 0; count < 5; count++)
          {
               printf("\nSubject %d = %d", count + 1, students[flash][count]);
          }
     }
     // printf("\nMarks for student 2 ");
     // for(count = 0 ; count < 5 ; count++)
     // {
     //      printf("\nSubject %d = %d",count+1,students[1][count]);
     // }
     // printf("\nSubject 2 = %d ", students[0][1]);
     // printf("\nSubject 3 = %d ", students[0][2]);
     // printf("\nSubject 4 = %d ", students[0][3]);
     // printf("\nSubject 5 = %d ", students[0][4]);

     // printf("\nEnter marks for student 2 \n");
     // for (count = 0; count < 5; count++)
     // {
     //      printf("Enter marks of subject %d ", count + 1);
     //      scanf("%d", &students[1][count]);
     // }

     // printf("\nEnter marks for student 3 \n");
     // for (count = 0; count < 5; count++)
     // {
     //      printf("Enter marks of subject %d ", count + 1);
     //      scanf("%d", &students[2][count]);
     // }

     // printf("\nEnter marks of subject 2 ");
     // scanf("%d",&students[0][1]);
     // printf("\nEnter marks of subject 3 ");
     // scanf("%d",&students[0][2]);
     // printf("\nEnter marks of subject 4 ");
     // scanf("%d",&students[0][3]);
     // printf("\nEnter marks of subject 5 ");
     // scanf("%d",&students[0][4]);
}