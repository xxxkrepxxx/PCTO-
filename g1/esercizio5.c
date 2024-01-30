#include<stdio.h>
int main()

{
    float c;
    printf("inserisci una temperatura in °celsius \n");
    scanf("%f",&c);
    float f = c * 1.8 + 32;
    float k = c + 273.15;

    if (c < -273.15)
    {
    printf("errore!");
    }
    else
    {
    printf("la tua temperatura in °kelvin è %f \n la tua temperatura in Fahrenheit è %f", k,f);
    }
    return(0);

}