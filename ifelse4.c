// Write a programe to findout wether the given year is millineum year or not
// 1000,2000,3000,4000,5000,6000
#include <stdio.h>
void main()
{
     int year = 0;

     printf("Enter value of year ");
     scanf("%d", &year);

     if (year % 1000 == 0)
     {
          printf("It is millinuem year ");
     }
     else
     {
          printf("It is not a millineum year ");
     }

     printf("\nGoodbyee..");
}