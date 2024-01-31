#include<stdio.h>
int main()
{
    int x;
    float y = 0;
    float n = 0;
    printf("inserisci solo numeri positivi \n");
    scanf("%d", &x);
    if (x >= 0)
    {
        while (x >= 0)
        {
            scanf("%d", &x);
            if (x < 0)
            {
                break;
            }
            
            y = y+1;
            n = x + n;
            printf("la media è : %f \n",n/y);
        }

    }
    return(0);
}