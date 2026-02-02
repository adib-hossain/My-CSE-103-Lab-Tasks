#include <stdio.h>

void main()
{
    float height,weight,BMI;
    printf("Enter height(meter): ");
    scanf("%f", &height);
    printf("\nEnter weight(kg) : ");
    scanf("%f", &weight);
    BMI = weight/(height*height);
    printf("\nThe BMI is : %.2f", BMI);
}