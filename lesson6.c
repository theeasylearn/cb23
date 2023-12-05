#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,result;
    printf("enter value for num1 ");
    scanf("%d",&num1);
    printf("enter value for num2 ");
    scanf("%d",&num2);

    result = num1 == num2; //double equal to 
    //if num1 and num2 has same value then == return 1 otherwise return 0
    printf("num1 == num2 = %d",result);

    result = num1 != num2; // not equal to 
    //if num1 and num2 has different value then != return 1 otherwise 1

    printf("\n num1 != num2 = %d",result);

    result = num1 < num2;
    //if num1 is less then num2 then it return 1 otherwise return 0
    printf("\n num1 < num2 = %d",result);

    result = num1 > num2;
    //if num1 is greater then num2 it return 1 otherwise return 0
    printf("\n num1 > num2 = %d",result);

    result = num1 <= num2;
    printf("\n num1 <= num2 = %d",result);

    result = num1 >= num2; 
    printf("\n num1 >= num2 = %d",result);
}