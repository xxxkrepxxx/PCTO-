#include<stdio.h>
int main()
{
    char x;
    scanf(" %c",&x);

    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u'|| x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("la lettera %c è una vocale", x);
    }

    else if ( ( x >= 0 && x <= 64) || ( x >= 92 && x <= 96) || ( x >= 123 && x <= 126) )

    {
        printf("Inserisci una lettera!");
    }
    
    else
    {
        printf("la lettera %c è una consonante",x);
    }
    
    return(0);
    
}