#include<stdio.h>

int main()
{
    int x;
    int y;
    int n;
    printf("scegli 2 numeri \n");
    scanf(" %d \n %d",&x,&y);

    printf("  scegli quale operazione vuoi eseguire \n 1 : addizione \n 2 : sottrazione \n 3 : moltiplicazione \n 4 : divisione \n");
    scanf("%d", &n);

    if (n==1)
    {
        printf("%d",x+y);
    }

    else if (n==2)
    {
        printf("%d",x-y);
    }

    else if (n==3)
    {
        printf("%d",x*y);
    }    

    else if (n==4)
    {
        printf("%d",x/y);
    }
}
