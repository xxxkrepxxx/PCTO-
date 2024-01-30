#include<stdio.h>
int main()

{
    int n;
    int n1;
    int n2;
    printf("inserisci 3 numeri e scoprirai se sono in successione aritmetica \n");
    scanf("%d \n %d \n %d",&n,&n1,&n2);
    if (n1 - n == n2 - n1)
    {
        printf("i numeri sono in successione aritmetica");
    }
    else
    {
        printf("i numeri non sono in successione aritmetica");
    }
    return(0);
}
