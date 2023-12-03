//write a program to swap value of two variable without using third variable
//a = 10 b = 20
//a = 20 b = 10
#include<stdio.h>
#include<conio.h>
void main()
{
    //variables 
    int a,b;
    printf("enter value for a");
    scanf("%d",&a);

    printf("enter value for b");
    scanf("%d",&b);

    //process 
    
    // a = 30 b 20
    b = a - b; //10 = 30 - 20
    // a = 30 b 10 
    a = a - b;
    printf("\n a = %d b = %d",a,b);
}
