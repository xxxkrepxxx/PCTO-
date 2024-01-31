#include <stdio.h>

int main()
{

    int n;

    printf("inserisci un numero \n");
    scanf("%d", &n);

    float s = n/2;
    float t = 0;

    while (s != t)

    {
        t = s;
        s = (n/t + t) / 2;
    }
    
    printf("la radice quadrata di %d è %f",n,s);

}