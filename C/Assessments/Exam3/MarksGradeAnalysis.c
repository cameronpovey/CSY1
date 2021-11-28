/*MarksGradeAnalysis.c
17/11/21
CP01/03
Cameron Povey
*/
/*PSEDUO-CODE
Start Program
Open file
Read first line and save module ID and number of students (module, students) output (out)
for i++ < students
read string from file (out)
assign string to letter grade varible (A, B)
if string > 100 or string < 0
print error message
print output (module, A, B)
*/
#include <stdio.h>

FILE *fp;

int main()
{
    //open file
    fp = fopen("marks.txt", "r");

    //Declare vairbles
    int out, module;
    int A=0, B=0;
    int students = 2; //2 to update student count from file

    //loop until i = amount of students
    for (int i = 0; i < students+2; i++){
        fscanf (fp, "%d", &out);
        printf ("%d\n",out);
        if (i==0){module = out;} //declare module and students from first two ints
        if (i==1){students = out;}
        else if (i>1){
            if (out > 100 || out < 0){ //data validation
                printf("%d invalid marks", module);
                return 0; //stop code on error
            }
            if (out >= 70){A++;}
            if (out < 70 && out >= 60){B++;} //sum up grades into inputs
        }
    }
    printf("%d %d %d\n", module, A, B); //output results
    
    fclose (fp); //close file
}
