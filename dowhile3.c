// Write a programe to create a menu driven calc
#include <stdio.h>
void main()
{
     int number1 = 0;
     int number2 = 0;
     int choice = 0;
     int answer = 0;

     do
     {
          printf("Enter value of number1 ");
          scanf("%d", &number1);
          printf("Enter value of number2 ");
          scanf("%d", &number2);

          printf("\nEnter 1 for addition ");
          printf("\nEnter 2 for subtraction ");
          printf("\nEnter 3 for Multplication ");
          printf("\nEnter 4 for division ");
          printf("\nEnter 0 for exit ");
          printf("\nSelect any one from above ");
          scanf("%d", &choice);

          if (choice == 1)
          {
               answer = number1 + number2;
          }
          else if (choice == 2)
          {
               answer = number1 - number2;
          }
          else if (choice == 3)
          {
               answer = number1 * number2;
          }
          else if (choice == 4)
          {
               answer = number1 / number2;
          }
          else if(choice == 0)
          {
               
          }
          else
          {
               printf("Invalid option ");
          }
          printf("\nthe value of answer is %d ", answer);
     }while(choice != 0 );
}