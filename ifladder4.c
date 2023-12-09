// Write a programe to findout greater number from given 3 number
#include <stdio.h>
void main()
{
     int number1 = 0, number2 = 0, number3 = 0;

     printf("Enter value of number 1 ");
     scanf("%d",&number1);
     printf("Enter value of number 2 ");
     scanf("%d",&number2);
     printf("Enter value of number 3 ");
     scanf("%d",&number3);

     if(number1 >= number2 && number1 >= number3)
     {
          printf("Number 1 is greater ");
     }
     else if(number2 >= number1 && number2 >= number3)
     {
          printf("Number 2 is greater ");
     }
     else if(number3 >= number1 && number3 >= number2)
     {
          printf("Number 3 is greater ");
     }
     else
     {
          printf("All are same ");
     }

}