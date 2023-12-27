// Example of function without argument with return value
// Write a programe to findout area of cylinder
#include <stdio.h>

float getPi()
{
     return 3.141592;
}

void main()
{
     float radius = 0;
     float height = 0;
     float area = 0;
     printf("Enter value of radius ");
     scanf("%f", &radius);
     printf("Enter value of height ");
     scanf("%f", &height);

     area = (2 * getPi() * radius * height) + (2 * getPi() * (radius * radius));
     printf("The value of area is %f ", area);
}