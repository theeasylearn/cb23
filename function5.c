// Write a programe to findout bmi of user using function
#include <stdio.h>

float footToMeter(int foot)
{
     float meter = foot / 3.281;
     return meter;
}

float inchToMeter(int inch)
{
     float meter = inch / 39.37;
     return meter;
}

float totalMeter(int foot , int inch)
{
     float answer;
     answer = inchToMeter(inch) + footToMeter(foot);
     return answer;
}

float getBmi(int foot,int inch , float weight)
{
     float bmi = 0 ;
     float meter = totalMeter(foot,inch);
     // printf("\nTHe value of metere is %f ",meter);
     bmi = weight / (meter * meter);
     return bmi;
}

void main()
{
     int foot = 0;
     int inch = 0;
     float weight = 0;
     float bmi = 0 ;
     printf("Enter value of foot ");
     scanf("%d", &foot);
     printf("Enter value of inch ");
     scanf("%d", &inch);
     printf("Enter value of weight ");
     scanf("%f", &weight);

     bmi = getBmi(foot,inch,weight);
     printf("The value of bmi is %.2f ",bmi);
}