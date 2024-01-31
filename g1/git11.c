#include<stdio.h>

int somma(int g, int y)
{
    int somma;

    somma = g + y;
    return(somma);

}

int main()
{
    int x = 5;
    int y = 7;
    int g = 9;
    int z = somma(g,y);

    

    printf("la somma è %d",z);

    return(0);
}