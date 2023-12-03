//write a program to swap value of two variable with using third variable
//a = 10 b = 20
//a = 20 b = 10
#include<stdio.h>
#include<conio.h>
void main()
{
    //variables 
    int a,b,c;
    printf("enter value for a");
    scanf("%d",&a);

    printf("enter value for b");
    scanf("%d",&b);

    //process 
    c = a;
    a = b;
    b = c;
    
    printf("\n a = %d b = %d",a,b);
}
