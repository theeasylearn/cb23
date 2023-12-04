//3) write a program convert foot into meter 
#include<stdio.h>
void main()
{
    int foot;
    float meter;
    printf("enter foot");
    scanf("%d",&foot);
    meter = foot % 3.281;
    printf("meter = %5.2f",meter);
}