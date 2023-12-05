#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3,result;
    //declaration part 

    printf("enter value for num1 ");
    scanf("%d",&num1);

    printf("enter value for num2 ");
    scanf("%d",&num2);

    printf("enter value for num3 ");
    scanf("%d",&num3);

    result = num1 == num2 && num2 == num3;

    printf("\n num1 == num2 && num2 == num3 = %d",result);
    
    result = num1 == num2 || num2 == num3;
    printf("\n num1 == num2 || num2 == num3 = %d",result);

    result = !(num1 == num2 && num2 == num3);
    printf("\n !(num1 == num2 && num2 == num3) = %d",result);
}