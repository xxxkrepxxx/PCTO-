#include<stdio.h>
int main() 
{
    
    int n;
    printf("inserisci il tuo anno di nascita ");
    scanf("%d",&n);
    int x = n-1969;
    int y = x * -1;
    if (n == 1969)
    {
    printf("sei nato lo stesso anno nel quale l'uomo è andato per la prima volta sulla luna!");
    }

    else if (x > 0)
    {
    printf("sei nato %d anni dopo dalla prima volta dell'uomo sulla luna", x);
    }

    else
    {
    printf("sei nato %d anni prima dalla prima volta dell'uomo sulla luna", y);  
    }
    return(0);

} 