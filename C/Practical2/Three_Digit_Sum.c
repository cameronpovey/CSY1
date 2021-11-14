#include <stdio.h>

int main()
{
    int inputNum = 0;
    int digOne;
    int digTwo;
    int digThr;
    int final;

    printf("Please enter any three digit number: ");
    scanf("%d", &inputNum);

    printf("%d\n",inputNum);

    if(inputNum < 100 || inputNum > 999)
    {
        printf ("This is not a valid three digit number: %d",inputNum);
    }

    else
    {   
        digOne = inputNum/100;
        digTwo = (inputNum/10)%10;
        digThr = inputNum % 10;

        final = digOne+digTwo+digThr;
        printf("%d\n", final);
    }
}
