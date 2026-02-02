#include <stdio.h>

void main()
{
    float a, t, s, u;
    printf("Enter the value of a : ");
    scanf("%f", &a);
    printf("\nEnter the value of t : ");
    scanf("%f", &t);
    printf("\nEnter the value of s : ");
    scanf("%f", &s);
    u = (s - (.5 * a * t * t)) / t;
    printf("\nThe result is : %.3f", u);
}