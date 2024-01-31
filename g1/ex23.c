#include<stdio.h>

double R(double A)
{
    int t = 0;
    int s = A/2;
    while (s != t)
    {
        t = s;
        s = (A/t+t)/2;
    }
    return(s);
}

int main()
{
    int x;
    int y;
    int z;
    printf("inserisci le dimensioni dei lati di un triangolo \n");
    scanf("%d %d %d",&x,&y,&z);

    if (x+y>z && x+z>y && y+z>x)
    {

        int p = (x+y+z)/2;
        double A= p*(p-x)*(p-y)*(p-z);
        double ris = R(A);

        printf("l'area è %lf \n il perimetro è %d",ris,p*2);
        
    }

    else
    {
        printf("le misure inserite non possono formare un triangolo");
    }
    

    return(0);
}