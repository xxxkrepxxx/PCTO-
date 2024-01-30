#include<stdio.h>
int main()

{
    int n;
    int x = 1;

    scanf("%d",&n);
    while (x <= n)

    {
        x = x + 1;
    }

    if (n%x == 0 && n%n == 0)
    {
    printf("il numero da te inserito  è un numero primo");
    }

    else
    {
        printf("il numero da te inserito  NON è un numero primo");
    }

    return(0);
    


}