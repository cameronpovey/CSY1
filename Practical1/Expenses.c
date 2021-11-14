#include <stdio.h>

int main() {
    float foodExpenses = 300;
    float leisureExpenses = 100.;
    float clothesExpenses = 50;
    float totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was £%.2f\n\n", totalSpent);
}