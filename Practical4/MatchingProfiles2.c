#include <stdio.h>

int main()
{
    float suspect[10];
    float criminal[3][10];
    int i;

    printf("Enter the 10 chromosomes of the suspect seperated by spaces: \n");
    for (int i = 0; i < 10; i++){
        scanf(" %f", &suspect[i]);
        //printf(" %lf\n", suspect[i]);
    }
    
    
    for (int c = 0; c < 3; c++){
        printf("Enter the 10 chromosomes of the %dth seperated by spaces: \n", c+1);
        for (int i = 0; i < 10; i++){
            scanf(" %f", &criminal[c][i]);
        }
    }
        

    // match two profiles
    int match = 1; //1=true 0=false
    
    for (int c = 0; c < 3; c++){
        for (int i = 0; i < 10; i++){
            if (suspect[i] == criminal[c][i])
            {
                printf("Its the %dth profile: \n", c+1);
                return 0;
            }
        }
    }
}