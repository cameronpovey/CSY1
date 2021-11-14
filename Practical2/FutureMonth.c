#include <stdio.h>

int main()
{
    int MonArr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, year;

    printf("Enter the month number: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && (year % 100 != 0)) || (year % 400 == 0))
    {
        MonArr [1] = 29;
    }
    
    printf ("That month will have %d days\n", MonArr[month-1]);
}