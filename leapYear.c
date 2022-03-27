// inputted year is leap year or not
#include <stdio.h>
main()
{
    int leapYear;
    printf("Enter a year: ");
    scanf("%d", &leapYear);
    if (leapYear % 4 == 0)
    {
        if (leapYear % 100 == 0)
        {
            if (leapYear % 400 == 0)
            {
                printf("%d is a leap year", leapYear);
            }
            else
            {
                printf("%d is not a leap year", leapYear);
            }
        }
        else
        {
            printf("%d is a leap year", leapYear);
        }
    }
    else
    {
        printf("%d is not a leap year", leapYear);
    }
}