#include<stdio.h>
int main()
{
    char x;
    scanf(" %c",&x);
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    {
        printf("la lettera %c è una vocale", x);
    }
    else
    {
        printf("la lettera %c è una consonante",x);
    }
    return(0);
    
}