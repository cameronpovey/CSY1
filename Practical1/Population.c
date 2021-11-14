#include <stdio.h>

int main(){
    //starting pop 312032486
    float current_pop = 312032486;
    //seconds in a day = 86400
    float birth_per = 7;
    float death_per = 13;
    float immigrant_per = 45;
    float years_project = 5;
    
    printf("The current population is %0.f\n\n", current_pop);

    //multiply births into day - year - after 5 years
    float births_day = 86400/birth_per;
    float births_year = births_day*365;
    float births_ovr = births_year * years_project;
    printf("Due to currrent projections in 5 years %.0f",births_ovr);
    printf(" people will have been born.\n");

    float death_day = 86400/death_per;
    float death_year = death_day * 365;
    float death_ovr = death_year * years_project;
    printf("Due to currrent projections in 5 years %.0f",death_ovr);
    printf(" people will have died.\n");

    float immigrant_day = 86400/immigrant_per;
    float immigrant_year = immigrant_day * 365;
    float immigrant_ovr = immigrant_year * years_project;
    printf("Due to currrent projections in 5 years %.0f",immigrant_ovr);
    printf(" people will have immigrated.\n\n");

    //calculate 5year population
    float pop5 = current_pop + births_ovr + immigrant_ovr - death_ovr;
    printf("In 5 years the population is projected to be %0.f\n\n", pop5);

}