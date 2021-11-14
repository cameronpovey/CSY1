/*BloodPressure.c
10/11/21
CP01/03
Cameron Povey
*/
#include <stdio.h>

int main()
{
    //Declare varibles
    int patient;
    int blood;
    int loop = 1; //1=true 0=false

    //Only loop until inputs are valid
    while (loop == 1){
        loop = 0;
        printf("Please input Patient Identity Number and the Blood Pressure reading: ");
        scanf("%d %d", &patient, &blood);
        
        //Validate input, restart loop if invalid
        if (patient < 1 || patient > 9999){
            printf("\nPlease enter a valid patient ID value. 1-9999\n");
            loop = 1;
        }
        if (blood < 70 || blood > 115){
            printf("Please enter a valid Blood Pressure value. 70-115\n");
            loop = 1;
        }
    }

    //Class blood level and output results
    if (blood >= 70 && blood < 90){
        printf("Patient %d has normal blood pressure.\n", patient);
    }
    else if (blood >= 91 && blood <= 105) {
        printf("Patient %d has hypertension.\n", patient);
    }
    else{
        printf("Patient #%d has a serious blood pressure problem.\n", patient);
    }
}