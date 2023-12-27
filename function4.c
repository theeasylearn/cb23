// Example of function with argument and with return value
// Write a programe to findout area of rectangle
#include <stdio.h>

int getRectangle(int length ,int  width)
{
     int answer = length * width ;
     return answer ;
}

void main()
{
     int length = 0;
     int width = 0;
     int area = 0 ;
     printf("Enter value of length ");
     scanf("%d", &length);
     printf("Enter value of width ");
     scanf("%d", &width);
     area = getRectangle(length,width);
     printf("The value of area is %d ",area);
}