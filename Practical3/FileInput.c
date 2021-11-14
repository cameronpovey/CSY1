#include <stdio.h>
FILE *fp; // define a file pointer for the file to hold a disk location
int main() {
    // open the file and assign its address/disk location to file pointer
    fp = fopen("FileRead.txt", "r"); //relative pathname used
    // declare variables for holding the values of input
    char firstWord[20]; // a word/string up to 20 characters 
    char secondWord[20];
    int num;
    //remind user - program reads to input values
    printf("Reads two words and an integer from file \n");
    // read two words and an integer from file
    //fscanf instead of scanf used, and file pointer needed
    fscanf(fp, "%s %s %d", firstWord, secondWord, &num);
    // display two words and an integer
    printf("Displays back what has been read from input file:\n");
    printf("%s %s \n%d \n", firstWord, secondWord, num);
    // add rest of program here – use fp for the file
    fclose (fp); // always close files you've opened }
}