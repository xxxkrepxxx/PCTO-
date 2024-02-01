#include<stdio.h>

int R(int x)
{

    if (x%2==0)
    {
        puts("il tuo numero è pari");
    }

    else
    {
        puts("il tuo numero è dispari");
    }
}

int main()
{
    int x;
    puts("inserisci un numero");
    scanf("%d", &x);

    R(x);
    
    return(0);
}