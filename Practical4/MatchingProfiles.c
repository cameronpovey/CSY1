#include <stdio.h>

int main()
{
    float suspect[10];
    float criminal[10];
    int i;

    printf("Enter the 10 chromosomes of the suspect seperated by spaces: \n");
    for (int i = 0; i < 10; i++){
        scanf(" %f", &suspect[i]);
        //printf(" %lf\n", suspect[i]);
    }
    
    printf("Enter the 10 chromosomes of the suspect seperated by spaces: \n");
    for (int i = 0; i < 10; i++){
        scanf(" %f", &criminal[i]);
    }

    // match two profiles
    int match = 1; //1=true 0=false
    
    for (int i = 0; i < 10; i++){
        if (suspect[i] != criminal[i])
        {
            match = 0;
        }
        printf("%lf - ", suspect[i]);
        if (match == 1){
            printf("The two profiles match! \n");
        }
        else  {
            printf("The two profiles don't match! \n");
        }
    }
}