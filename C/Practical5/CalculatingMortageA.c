#include <stdio.h>

int main(){
    double salary1, salary2, largerSalary, smallerSalary, mortgage;

    printf("Enter two salaries separated by a space: \n");
    scanf(" %lf %lf", &salary1, &salary2);
    //Select the larger salary, largerSalary
    if (salary1 > salary2)
        largerSalary = salary1;
    else
        largerSalary = salary2;

    //Select the smaller salary, smallerSalary
    if (salary1 > salary2)
        smallerSalary = salary2;
    else
        smallerSalary = salary1;
        
    //Calculate mortgage
    mortgage = largerSalary * 3; mortgage += smallerSalary;
    //Display the mortgage
    printf("The maximum size of mortgage is: £ %.2lf \n", mortgage);   
}