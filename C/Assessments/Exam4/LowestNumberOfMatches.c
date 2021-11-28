/*LowestNumberOfMatches.c
24/11/21
CP01/03
Cameron Povey
*/

/*PSEDUO-CODE
BEGIN Main
1-d array - student
2-d array (5x5) - friends
OPEN file

READ file -line 1-  sort into one dimentional array (student)
READ file -lines 2 to 6- sort into two dimentional array (friends)
FOR loop 30 (i)
    IF i < 6
        student[i] = File output
    END IF
    ELSE
        friends[i] = File ouput
    END ELSE
END FOR

FOR loop 5 (x)
    FOR loop 5 (y)
        IF friend[x] = student[y]
            prefCount ++
        END IF
    END FOR
    IF prefCount < prefLowest
        prefLowest = prefCount
    END IF
END FOR
OUTPUT lowestPref
*/

#include <stdio.h>

FILE *fp;

int main()
{
    //read file
    fp = fopen("./prefrences.txt", "r");

    //declare arrays
    int student[5];
    float friends[5][5];

    //declare varibles
    int prefLowest=0, prefCount=0, y=0, count=0;
    int out;

    //loop until all 30 numbers are read
    for (int i = 0; i < 30; i++){
        fscanf (fp, "%d", &out);
        if (i < 5){
            student[i] = out;
        }
        else{
            count++;
            if (count == 5){
                y++;
                count=0;
                printf("t");
            }
            friends[(i-5)][y] = out;
        }
    }

    for (int y=0; y<5; y++){
        prefCount=0;
        for (int i=0; i<5; i++){
            for (int x=0; x<5; x++){
                if (friends[i][y] == student[x]){
                    prefCount++;
                }
            }
        }
        if (prefCount < prefLowest){
            prefLowest = prefCount;
        }
    }

    printf("The lowest number of shared preferences is %d", prefLowest);

    fclose (fp);
}