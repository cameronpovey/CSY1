#include <stdio.h>
FILE *fp; // define a file pointer for the file to hold a disk location
int main() {

    fp = fopen("CustomerStats.txt", "r");

    int out;
    int user;
    int userovr;
    int count = 2;
    int heavy = 0;
    int regular = 0;
    int light = 0;
  
    while (!feof (fp)){
        fscanf (fp, "%d", &out);  
        if (count == 2){}
        else if ((count % 3 == 0)){
            userovr = 0;
            user = out;
        }
        else{
            userovr = out + userovr;
        }
        if (userovr > 1000){heavy++;}
        else if (userovr >= 500 && userovr <= 1000){regular++;}
        else if (userovr < 500){light++;}
        
        count++;
    }
    printf("Heavy Users: %d\n", heavy);
    printf("Regular Users: %d\n", regular);
    printf("Light Users: %d\n", light);
    fclose (fp);    
}