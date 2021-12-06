/*BestFriends.c
01/12/21
CP01/03
Cameron Povey
*/

/*PSEDUO-CODE
BEGIN Main
    INPUT "5 prefrences" = friendA[int1, int2, int3, int4, int5]
    INPUT "5 prefrences" = friendA[int1, int2, int3, int4, int5]

    CALL matchPreferences

    IF matchPrefrences = TRUE
        OUTPUT GOOD MATCH
    END IF

    ELSE
        OUTPUT NOT GOOD MATCH
    END ELSE
END MAIN

BEGIN matchPreferences
    SET ovrPrefCount <-- 0
    SET exactPrefCount <-- 0

    FOR 5 loops (i)
        FOR 5 loops (x)
            IF friendA[i] = friendB[x]
                SET ovrPrefCount <-- ovrPrefCount + 1
            END IF
            IF x = i && friendA[i] == friendB[x]
                SET exactPrefCount <-- exactPrefCount + 1
            END IF
        END FOR
    END FOR

    IF ovrPrefCount => 3 OR exactPrefCount =>2
        return TRUE
    END IF
END matchPreferences
*/
#include <stdio.h>
#include <stdbool.h>

// start function
bool matchPreferences(int friendA[], int friendB[]){

    //declare counters
    int overPrefCount = 0;
    int exactPrefCount = 0;
    int i, x;

    //compare all numbers
    for (i=0; i<5; i++){
        for (x=0; x<5; x++){
            if (friendA[i] == friendB[x])
            {
                overPrefCount++;
                //if the numbers are in the same place
                if (x == i){
                    exactPrefCount++;
                }
            }
            
        }
    }

    //return true/false values
    if (overPrefCount > 2 || exactPrefCount > 1){return true;}
    else{return false;}
}

int main()
{
    //declare arrays
    int friendA[5];
    int friendB[5];

    //user inputs assign arrays
    printf("Enter friend A's top five preferences: ");
    scanf("%d %d %d %d %d", &friendA[0], &friendA[1], &friendA[2], &friendA[3], &friendA[4]);

    printf("Enter friend B's top five preferences: ");
    scanf("%d %d %d %d %d", &friendB[0], &friendB[1], &friendB[2], &friendB[3], &friendB[4]);

    //call function & get output
    if (matchPreferences(friendA, friendB) == true){printf("Good match\n");}
    else{printf("Not good match\n");}
}