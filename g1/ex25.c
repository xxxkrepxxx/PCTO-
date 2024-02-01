#include<stdio.h>

void R(int x,int y)
{

    if (x==y)
    {
        puts("i due numeri sono uguali");
    }

    else if (x>y)
    {
        printf(" %d è maggiore di %d",x,y);
    }

    else
    {
        printf("%d è maggiore di %d",y,x);
    }
}

int main()
{

    int x,y;

    puts("inserisci 2 numeri");
    scanf("%d \n %d", &x,&y);

    R(x,y);

    return(0);

}