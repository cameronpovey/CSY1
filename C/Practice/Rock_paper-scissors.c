#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int ran;
    char playerChoice [10] = "null";
    int choice;
    int valid = 0; //0 = false  1 = true
    char replay [5] = "null";

    char rps [3][20] = {"Rock", "Paper", "Scissors"};

    srand(time(NULL));

    printf("Lets play some Rock, Paper, Scisssors!\n");
    printf("The rules are simple, Paper covers rock, rock crushes scissors and scissors cuts paper.\n");
    printf("If you want to stop playing just say exit!\n");

    while (valid == 0){ 

        ran = rand() % 3;

        printf("Lets play Rock, Paper, Scissors, Enter your choice: ");
        scanf("%s%*c", playerChoice);

        //answer validation
        if (strcmp(playerChoice, "Rock")==0 || strcmp(playerChoice, "rock")==0 || strcmp(playerChoice, "r")==0){
            choice = 0;
        }
        else if (strcmp(playerChoice, "Paper")==0 || strcmp(playerChoice, "paper")==0 || strcmp(playerChoice, "p")==0){
            choice = 1;
        }
        else if (strcmp(playerChoice, "Scissors")==0 || strcmp(playerChoice, "scissors")==0 || strcmp(playerChoice, "s")==0){
            choice = 2;
        }
        if (strcmp(playerChoice, "exit")==0){
            return 0;
        }
        else{
            printf("Please enter a valid item.\n");
        }

        printf("You picked %s\n", rps[choice]);
        printf("I picked %s\n", rps[ran]);

        if (choice == ran){
            printf("We both picked the same thing! Lets pick again!\n");
            valid = 0;
        }
        else if (choice==0 && ran==1){
            printf("Paper covers rock, I win!\n");
        }
        else if (choice==1 && ran==0){
            printf("Paper covers rock, you win!\n");
        }
        else if (choice==0 && ran==2){
            printf("Rock crushes Scissors, you win!\n");
        }
        else if (choice==2 && ran==0){
            printf("Rock crushes Scissors, I win!\n");
        }
        else if (choice==2 && ran==1){
            printf("Scissors cuts paper, you win!\n");
        }
        else if (choice==1 && ran==2){
            printf("Scissors cuts paper, I win!\n");
        }
    }
}
