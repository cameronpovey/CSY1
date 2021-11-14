#include <stdio.h>

int main()
{
    char character [20];
    char string [20];
    char sentence [500];

    printf ("Enter a character: ");
    scanf ("%s", character);

    printf ("Enter a string of characters: ");
    scanf ("%s*c", string);

    printf ("Enter a sentence: ");
    scanf ("%[^\n]", sentence);

    printf ("\n%s", character);
    printf ("\n%s", string);
    printf ("\n%s\n", sentence);
}