#include<stdio.h>
#include<math.h>

double R(int x,int y, int z,int p, int o, double A)
{
    double a = A/2
    double d = A - a * A

    while (d > 0.00001)
    {
        a = (a+A/a) / 2.0;
        d = A-a*a;
    }
    return(a);

}

int main()
{
    int x;
    int y;
    int z;
    printf("inserisci le dimensioni dei lati di un triangolo");
    scanf("%d \n %d \n %d",&x,&y,&z);

    int p = x+y+z;
    int o = p/2;
    double A= sqrt(p/2*(o-x)*(o-y)*(o-z));

    printf("l'area è %f \n il perimetro è %d",A,p);

    return(0);
}