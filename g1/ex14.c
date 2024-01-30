#include<stdio.h>
int main()

{
    unsigned long x = 1;
    int y= 1;
    int n;
    scanf("%d",&n);
    while (y <= n)
    {
        x = y*x;
        y = y+1;
    }
    printf("fattoriale = %ld\n", x);
    return(0);

}