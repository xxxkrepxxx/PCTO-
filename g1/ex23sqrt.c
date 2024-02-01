#include <math.h>
#include <stdio.h>

int main()
{
    int x,y,z;

    printf("inserisci le dimensioni dei lati di un triangolo \n");                          /*gcc ex23sqrt.c -o a.out -lm*/
    scanf("%d \n %d \n %d",&x,&y,&z);

    if (x+y>z && x+z>y && y+z>x)
    {

        if (x > 0 && y > 0 && z > 0)
        {

            int p = x+y+z;
            int o = p/2;
            double A= sqrt(o*(o-x)*(o-y)*(o-z));

            printf("l'area è %lf \n il perimetro è %d",A,p);

        }

    }
    
    else
    {
        printf("i numeri da te inseriti non posso formare un triangolo!");
    }
    
    return(0);

}

