#include<stdio.h>
int main()

{
    int x = 1;
    int y = 0;
    while (x <= 100)
    {
        y = y+x;
        x = x+1;
    }
    printf("Somma = %d\n", y);
    return(0);

}