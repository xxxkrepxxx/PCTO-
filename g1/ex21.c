#include<stdio.h>
int main()
{
    int x;
    unsigned short y;
    short z;
    
    while (x==1000000)
    {
        printf("prova ad indovinare il numero generato dal computer!\n");
        scanf("%d", &x);
    
    
            if (x==y)
            {
            z = z+1;
            printf("bravo hai indovinato!\n");
            printf("ora hai %d punti!", z);
            }
    
            else
            {
            printf("non hai indovinato prova dinuovo!\n");
            }
    }
    
    return(0);
}