#include <stdio.h>

void main()
{
    int sec, hour, minute;
    printf("Enter seconds: ");
    scanf("%d", &sec);

    hour = sec / 3600;
    minute = (sec % 3600) / 60;
    sec = (sec % 3600) % 60;
    printf("The result(time) is : %dH %dM %dS ", hour, minute, sec);
}