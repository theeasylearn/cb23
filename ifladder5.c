// Write a programe to create a calc
// ->addition
// ->subtraction
// ->multiplication
// ->division
// ->modulus
// ->max
// ->min
// ->equality
#include <stdio.h>
void main()
{
     int number1 = 0;
     int number2 = 0;
     int option = 0;
     float answer = 0;
     printf("Enter value of number1 ");
     scanf("%d", &number1);
     printf("Enter value of number2 ");
     scanf("%d", &number2);

     printf("\nEnter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for mulitplication ");
     printf("\nEnter 4 for division ");
     printf("\nEnter 5 for modulus ");
     printf("\nEnter 6 for max ");
     printf("\nEnter 7 for min ");
     printf("\nEnter 8 for eqaulity ");
     printf("\nSelect any one from above ");
     scanf("%d", &option);

     if (option == 1)
     {
          answer = number1 + number2;
          printf("THe value of answer is %f  ",answer);
     }
     else if (option == 2)
     {
          answer = number1 - number2;
          printf("THe value of answer is %f  ",answer);
     }
     else if(option == 3)
     {
          answer = number1 * number2;
          printf("THe value of answer is %.2f  ",answer);
     }
     else if(option == 4)
     {
          answer = number1 / number2 ;
          printf("THe value of answer is %.2f  ",answer);
     }
     else if(option == 5 )
     {
          answer = number1 % number2;
          printf("The value of answer is %.2f ",answer);
     }
     else if(option == 6)
     {
          if(number1 > number2)
          {
               printf("Number 1 is greater ");
          }
          else
          {
               printf("Number 2 is greater ");
          }
     }
     else if(option == 7)
     {
          if(number1 < number2)
          {
               printf("Number 1 is smaller ");
          }
          else
          {
               printf("Number 2 is smaller ");
          }
     }
     else if(option == 8)
     {
          if(number1 == number2)
          {
               printf("Both are same ");
          }
          else
          {
               printf("Both are not same ");
          }
     }
     else
     {
          printf("Please Select valid option ");
     }
}