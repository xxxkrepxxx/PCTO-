#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    short z = 0;

    printf("prova ad indovinare il numero generato dal computer da 1 a 20!\n (per uscire digita 0) \n");

    while (x!=0)
    {
        
        unsigned short y = rand() % 20 + 1;

        scanf("%d", &x);

            if (x==y)
            {
            z = z+1;
            printf("bravo hai indovinato!  \n");
            printf("ora hai %d punti! \n", z);
            }

            else if (x==0)
            {
            break;
            }
    
            else
            {
            printf("hai sbagliato!il numero era: %d  \n", y);
            }

    }

    return(0);
}