#include<stdio.h>
int main()
{
    int n;
    int n1;
    int n2;

    printf("inserisci 3 misure, tali misure formeranno i lati di un triangolo, scopri che tipo di triangolo è. \n");
    scanf("%d \n %d \n %d",&n,&n1,&n2);

    if (n!=n1 && n!=n2 && n1!=n2)
    {
    printf("il tuo triangolo è scaleno");
    }

    else if (n==n2 && n1==n2 && n==n1)
    {
    printf("il tuo triangolo è equilatero");
    }

    else
    {
        printf("il tuo triangolo è isoscele");
    }
    return(0); 
}