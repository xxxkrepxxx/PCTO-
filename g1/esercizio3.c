#include<stdio.h>
int main()

{
    int n;
    int e;
    printf("inserisci la tua età e l'età minima consentita per reperire la patente nel tuo stato\n");
    scanf("%d",&n);
    printf("inserisci l'età minima consentita per reperire la patente nel tuo stato\n");
    scanf("%d",&e);

    if (n <= e)
    {
    printf("hai l'età consentita per prendere la patente nel tuo stato \n");
    }

    else
    { 
    printf("non hai l'età corretta per prendere la patente nel tuo stato \n");
    }
    return(0);
}