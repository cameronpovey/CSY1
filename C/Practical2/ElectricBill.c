#include <stdio.h>

int main()
{
    int previousMetre = 1, currentMetre = 1, day = 1, month = 1;
    int loop = 1; //loop = true
    int MonArr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    while (loop == 1)//until no error
    {
        
        printf("Please enter the previous metre read followed by the current metre reading with the day and the month, eg: 900 800 23 5: ");
        scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month);
        printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);

        if (previousMetre == 0 && currentMetre == 0 && day == 0 && month == 0)
        {
            printf("Program exiting\n");
            return 0;
        }

        //Validation
        if (previousMetre < 0 || previousMetre > 9999)
        {
            printf("Previous metre reading data out of range\n");
        }
        else if (currentMetre < 0 || currentMetre > 9999)
        {
            printf("Current metre reading data out of range\n");
        }
        else if (previousMetre-currentMetre < 0 || previousMetre-currentMetre > 1000)
        {
            printf("Electricity used out of range\n");
        }
        else if (month < 1 || month > 12)
        {
            printf ("Invalid month\n");
        }
        else if (day < 1  || day > MonArr[month-1])
        {
            printf("Invalid day\n");
        }
        else
        {
            loop = 0;
        }
    }
    
    
}
