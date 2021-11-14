/*FlightBooking.c
03/11/21
CP01/03
Cameron Povey
*/

#include <stdio.h>

int main()
{
    //Declare varibles
    int adults, children;
    double adultfare, childrenfare, total;
    const double tax = 1.13;

    //Ask for user input
    printf("Enter the number of adults: ");
    scanf("%d", &adults);
    printf("Enter the number of children: ");
    scanf("%d", &children);
    printf("Enter the fare for adults: ");
    scanf("%lf", &adultfare); 
    printf("Enter the fare for children: ");
    scanf("%lf", &childrenfare);

    //Total price sum and output
    total = ((adults*adultfare)+(children*childrenfare))*tax;
    printf ("Your total cost of the booking is £%.2f\n", total);
}