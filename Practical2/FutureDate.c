#include <stdio.h>

int main()
{
    int today, future, day;

    printf ("Enter todays day (Monday is 0, Tuesday is 1 and Sunday is 6): ");
    scanf ("%d", &today);

    printf ("Enter the number of days in the future of the day you would like to find: ");
    scanf ("%d", &future);

    day = (today + future) % 7;
    printf ("%d\n", day);
    
    switch (day % 7)
    {
        case 0: printf ("Monday\n"); break;
        case 1: printf ("Tuesday\n"); break;
        case 2: printf ("Wednesday\n"); break;
        case 3: printf ("Thursday\n"); break;
        case 4: printf ("Friday\n"); break;
        case 5: printf ("Saturday\n"); break;
        case 6: printf ("Sunday\n"); break;
    }
}
