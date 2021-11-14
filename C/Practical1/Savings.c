#include <stdio.h>

int main(){

    int count;

    float current;
    printf ("Enter your starting amount: ");
    scanf ("%f", &current);
    
    float saves;
    printf ("Enter how much you will save per month: ");
    scanf ("%f", &saves);

    float intrest;
    printf ("Enter your annual intrest rate: ");
    scanf ("%f", &intrest);
    float intrestperm = (intrest/100)/12;
    printf ("%f\n", intrestperm);

    int find_month;
    printf ("How many months would you like to keep the account for: ");
    scanf ("%d", &find_month);

    for (count=1;count<=find_month;count++)
    {
        current = current + 100;
        current = current * (1 + intrestperm);
        printf ("%.2f\n", current);
    }
}