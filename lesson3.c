// write a program to convert given minutes into hours and minutes
//minutes = 200 
// hours = 3 , minutes = 20
#include<stdio.h>
#include<conio.h>
void main()
{
    int minutes,hour,minute; 
    //input
    printf("enter total minutes");
    scanf("%d",&minutes);

    hour = minutes / 60; // 3
    minute = minutes - (hour * 60);
    printf("\n hour = %d minutes = %d",hour,minute);

}