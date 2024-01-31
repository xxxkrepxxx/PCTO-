#include<stdio.h>

int main()
{
    float x;
    float y;

    printf("inserisci 2 cordinate di un punto nel piano cartesiano, lo script ti darà in che quadrante si trova. \n");
    scanf("%f \n %f",&x,&y);
    
    if (x == 0 && y == 0)
    {
        printf("le cordinate si trovano sul punto di origine");
    }
    
    else if (x == 0 && y != 0)
    {
        printf("le cordinate si trovano in corrispondenza della retta delle ascisse");
    }

    else if (x != 0 && y == 0)
    {
        printf("le cordinate si trovano in corrispondenza della retta delle ordinate");
    }
    
    else if (x > 0 && y > 0)
    {
        printf("le cordinate si trovano nel 1 quadrante");
    }
    
    else if (x > 0 && y < 0)
    {
        printf("le cordinate si trovano nel 4 quadrante");
    }
        
    else if (x < 0 && y < 0)
    {
        printf("le cordinate si trovano nel 3 quadrante");
    }
        
    else if (x < 0 && y > 0)
    {
        printf("le cordinate si trovano nel 2 quadrante");
    }
    
    return(0);

}