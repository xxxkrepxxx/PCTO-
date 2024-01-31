#include<stdio.h>
void Z()
{
    int x;
    printf("inserisci numero \n");
    scanf(" %d", &x);
    printf("il cubo di %d è %d \n",x,x*x*x);
}

int main()
{
    Z();
    Z();
    Z();
    Z();
    return(0);
}