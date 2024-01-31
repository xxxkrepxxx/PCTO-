#include<stdio.h>
int main()
{
    int n;
    int n1;
    int n2;
    printf("inserisci 3 misure e scopri se un triangolo può avere tali misure come lati! \n");
    scanf("%d \n %d \n %d", &n,&n1,&n2);

    if (n+n1>n2 && n+n2>n1 && n1+n2>n)
    {
        printf("le misure da te inserite posso essere i lati di un triangolo!");
    }
    else
    {
        printf("le misure da te inserite non posso formare i lati di un trianglo");
    }
    return(0);
}