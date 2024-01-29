#include <stdio.h>

int main()
{
    int n1 = 500;
    int n2 = 435;
    int somma = n1 + n2;
    int differenza = n1 - n2;
    int prodotto = n1 * n2;
    float quoziente = n1 / n2;
    int resto = n1 % n2;
    printf("il tuo risulato è : %f \n ",quoziente);
    printf("il tuo risulato è : %d \n il tuo risultato è sbagliato \n ",prodotto);
    printf("il tuo risulato è : %d ",resto);

    return(0);
}