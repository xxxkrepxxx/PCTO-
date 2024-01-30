#include<stdio.h>
int main()

{
    int n;
    printf("inserisci la tua età \n");
    scanf("%d",&n);

    if (n >= 18)
    {
    printf("bravo sei maggiorenne");
    }

    else
    { 
    printf("NO! sei minorenne");
    }
    return(0);
}

