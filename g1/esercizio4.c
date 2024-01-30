#include<stdio.h>
int main()
{
    int n;
    int n1;
    printf("inserisci un numero \n");
    scanf("%d", &n);
    printf("inserisci un secondo numero \n");
    scanf("%d", &n1);
    if (n % n1 == 0)
    {
    printf("il primo numero è multiplo del secondo");
    }
    else
    {
    printf("i il primo numero non è multiplo del secondo");
    }
    
    



}