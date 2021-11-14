#include <stdio.h>
FILE *fp; // define a file pointer for the file to hold a disk location
int main() {
    fp = fopen("bill_input.txt", "r");

    char out [20];

    fgets(out, sizeof(out), fp);
    printf("%s\n", out);


    fclose (fp); // always close files you've opened
}