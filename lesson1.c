#include<stdio.h>
#include<conio.h>
void main()
{
    //create variables
    //datatype variable-name;
    int num1,num2,add,sub,mul; //2 bytes
    float div; //4 bytes
    printf("Maths Calculator");
    printf("\n enter num1");
    scanf("%d",&num1);

    printf("\n enter num2");
    scanf("%d",&num2);

    //process (expression)
    // binary operators 
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / num2; //(float)num1 type casting

    //result display 
    printf("\n addition=%d substraction=%d multiplication=%d division=%5.2f",add,sub,mul,div);

    
}