#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hour_str[5], min_str[5];
    int hour = 0, min = 0;

    printf("Enter hour: ");
    fgets(hour_str, 4, stdin);

    printf("Enter minute: ");
    fgets(min_str,4,stdin);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %02d:%02d", hour, min);
    return 0;
}