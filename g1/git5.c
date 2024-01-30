#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int resut = 1;

    while (x > 0)
    {
    resut = resut*x;
    x = x-1;
    }
    
    printf("%d",resut);
    return(0);
}