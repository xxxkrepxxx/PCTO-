#include<stdio.h>

int main()
{

    char s[80];
    puts("inserisci una frase a tua scelta");
    scanf(" %80[^\n]",s);
    int x = 0;

    while (s[x] != '\0')
    {
        if (s[x]>='a' && s[x]<='z')
        {
            s[x] = s[x]-32;
        }

        x= x+1;
    }
    
    printf("%s \n",s);
    return(0);

}


