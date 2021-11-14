#include <stdio.h>

FILE *fp;

int main()
{
    float suspect[10];
    float criminal[3][10];
    int i = 0;
    int c = 0;
    float lines;
    int sus = 1;//0=false 1=true
    int count = 0;

    

    float out;

    fp = fopen("dna_input.txt", "r");

    while (!feof (fp)){
        fscanf (fp, "%f", &out);  
        printf("%f\n", out);
        if (count < 10)
        {
            suspect[count]=out;
            count++;
        }
        else if (count == 10){
            sus = 0;
            lines = out; 
            printf("\n%f\n\n",lines);
        }
        
        if (sus == 0) {
            if (c < lines)
            {
                i++;
                if (i >= 10){i = 0;c++;printf("\n--------\n");}
                if (i < 10)
                {
                    criminal[c][i] = out;
                }
            }
        }
        
    }

    int match = 1; //1=true 0=false
    printf("\n----------");
    for (i=0; i < 10; i++)
    {
        printf("\n%f", suspect[i]);
    }
        
    printf("\n%f", criminal[2][5]);
    printf("\n----------");

    for (int c = 0; c < 3; c++){
        for (int i = 0; i < 10; i++){
            if (suspect[i] == criminal[c][i])
            {
                printf("Its the %dth profile: \n", c+1);
                return 0;
            }
        }
    }
}