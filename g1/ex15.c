#include<stdio.h>
int main()

{
    int n;
    int x = 2;
    int d = 0;
    printf("inserisci un numero \n");
    scanf("%d",&n);

    while (x < n)
    {
        if (n%x == 0) break;
        {
         d= d + 1;
        }
        x = x + 1;
    }
    if (d = 0)
    {
        printf("il tuo numero è primo");
    }
    else
    {
        printf("il tuo numero non è primo");
    }
    
    
    return(0);
    


}