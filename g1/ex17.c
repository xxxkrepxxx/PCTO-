#include<stdio.h>
int main()
{
    int n = 0;
    float y = 0;
    float x = 0;
    while (n>=0)
    {
        printf(" \ninserisci un numero \n");
        scanf("%d",&n);
        if (n < 0)
        {
            printf("error");
            break;
        }
        y = y+1;
        x = x + n;
        printf("%f",x/y);
    }
    return(0);
}