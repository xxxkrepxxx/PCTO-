#include<stdio.h>

int R(int x)
{
    int z = 1;
    int y = 1;

    while (y<=x)
    {
        z = y*z;
        y = y+1;
    }
    
    return(z);
}

int main()
{
    int x;

    puts("inserisci un numero");
    scanf("%d",&x);

    printf("il fattoriale di %d è %d",x,R(x));

    return(0);
}