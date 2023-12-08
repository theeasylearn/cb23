// Write a programe to findout greater triangle from given height and base
#include <stdio.h>
void main()
{
     float height1 = 0, base1 = 0, height2 = 0, base2 = 0;
     float triangle1 = 0, triangle2 = 0;

     printf("Enter value of height1 ");
     scanf("%f", &height1);
     printf("Enter value of base1 ");
     scanf("%f", &base1);
     printf("Enter value of height2 ");
     scanf("%f", &height2);
     printf("Enter value of base2 ");
     scanf("%f", &base2);

     triangle1 = height1 * base1 / 2;
     triangle2 = height2 * base2 / 2;

     if (triangle1 > triangle2)
     {
          printf("Triangle 1 is greater ");
     }
     else
     {
          printf("Triangle 2 is greater ");
     }

     printf("\nGoodbyee...");
}