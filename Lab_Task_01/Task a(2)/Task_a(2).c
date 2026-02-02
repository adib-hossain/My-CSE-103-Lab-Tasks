#include <stdio.h>

int main()
{
    float v, m, F, R;
    printf("Enter the value of v : ");
    scanf("%f", &v);
    printf("\nEnter the value of m : ");
    scanf("%f", &m);
    printf("\nEnter the value of F : ");
    scanf("%f", &F);
    R = (m * v * v) / F;
    printf("\nThe result is : %.3f", R);
    return 0;
}