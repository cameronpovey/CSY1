#include <stdio.h>
#include <stdbool.h>

bool matchingProfiles(float suspect[], float aCriminal[]);
FILE *fp; // define a file pointer for the file
int main(){
    // open the file and assign its address to file pointer
    fp = fopen("./dna_input.txt", "r");
    
    int size = 10;
    float suspect[size]; // declaring suspect array
    
    int sizeR;
    int sizeC = 10;

    // read 10 input values into suspect array
    printf("Reading the 10 gene chromosomes of the suspect \n");
    for (int i = 0; i < size; i++){
        fscanf(fp, " %f", &suspect[i]);
    }

    // read the number of criminals
    printf("Reading the number of criminals \n");
    fscanf(fp, " %d", &sizeR);

    float criminals[sizeR][sizeC]; // declaring criminals array

    // read multiple profiles of 10 input values into criminals array
    for (int i = 0; i < sizeR; i++) {
        printf("Read the 10 gene chromosomes of %dth criminal \n", i);
        // read 10 input values of a criminal into criminals array
        for (int j = 0; j <sizeC; j++){
            fscanf(fp, " %f", &criminals[i][j]);
        }
    }

    // match suspect with each criminal and display the result
    for (int i = 0; i < sizeR; i++) {
        // call function, matchingProfiles() with suspect array and ith row of crinimals array
        if (matchingProfiles(suspect, criminals[i]) == true){printf("The %dth criminal matches! \n", i+1);} // function call
        else{
            printf("The %dth criminal doesn't match! \n", i+1);
        }
    }

    fclose (fp); // always close files you've opened
    return 0;
}

    /******************************************************************/
    // define the function matchingProfiles(suspect[], aCriminal[])

    bool matchingProfiles(float suspect[], float aCriminal[]) {
        for (int i = 0; i < 10; i++){
            if (suspect[i] != aCriminal[i]){return false;}
        }
        return true;
    }