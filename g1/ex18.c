#include<stdio.h>
int main()
{
    float x;


    while (x >= 0)
    {
        printf("inserisci il totale del tuo ordine \n");
        scanf("%f", &x);
        if (x < 0)
        {
            break;
        }
        
        
        else if (x <= 30)
        {
            printf("%f",x*5);
        }

        else if (x <= 50)
        {
            printf("il tuo totale è  %f",x*5 - x*5*1/10);
        }

        else 
        {
            printf("il tuo totale è  %f",x*5 - x*75/100);
        }
        
    }

    return(0);
}