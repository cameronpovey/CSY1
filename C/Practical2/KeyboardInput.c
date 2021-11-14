#include <stdio.h>

int main() {
    char firstWord [20];
    char secondWord [20];
    int num;

    printf ("Please enter two words and an integer: ");

    scanf("%s %s %d", firstWord, secondWord, &num);

    printf("%s\n%s\n%d\n", firstWord, secondWord, num);

}