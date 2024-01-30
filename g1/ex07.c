#include<stdio.h>
int main()
{
    int n;
    printf("inserisci un annata e scoprirai se è bisestile \n");
    scanf("%d", &n);
    if (n%4==0 && n%100!=0 || n%400==0)
    {
        printf("l'anno da te inserito è bisestile");
    }
    else
    {
        printf("l'anno da te inserito non è bisestile");
    }
    return(0);
}