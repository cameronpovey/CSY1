#include <stdio.h>

double largerSalary(double salary1, double salary2);
double smallerSalary(double salary1, double salary2);

int main() {
    //Declare variables
    double salary1, salary2, mortgage;
    //Read in two salaries, salary1, salary2
    printf("Enter two salaries separated by a space: \n");
    scanf(" %lf %lf", &salary1, &salary2);
    //Calculate mortgage

    //call largerSalary function
    mortgage = largerSalary(salary1,salary2) * 3;
    //call smallerSalary function
    mortgage += smallerSalary(salary1, salary2);
    //Display the mortgage
    printf("The maximum size of mortgage is: £ %.2lf \n", mortgage);
}

double largerSalary(double salary1, double salary2) {
    if (salary1 > salary2){
        return salary1;
    }
    else
        return salary2;
}
double smallerSalary(double salary1, double salary2) {
    if (salary1 > salary2){
        return salary2;
    }
    else
        return salary1;
}