#include <stdio.h>

void main()
{
    float x,y,z;
    printf("Enter the value of x : ");
    scanf("%f", &x);
    printf("\nEnter the value of z : ");
    scanf("%f", &z);
    y = (5*x) + (9*z*z) + 6;
    printf("\nThe value of y is : %.3f", y);
}