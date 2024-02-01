#include<stdio.h>

void R()
{
    int array[5] = {5,6,8,2,42};                   // gli indici dell'array partono dallo 0 che corrisponde in questo caso al 5 //
                //  0,1,2,3,4,....//

    printf("%d \n",array[3]);                      // in questo caso per selezionare l'indice da printare dobbiamo mettere il numero al quale corrisponde nella sequenza dell'array//
    array[1] = 18;
    printf("%d \n",array[1]);

}

int main()
{

    R();
    char stringa[5]={'c','i','a','o', '\0'};        //quando creiamo un array di char dobbiamo inserire all'ultimo carattere in sequenza dell'array '\0' ovvero l'ultimo carattere della tabella ashi e viene chiamato terminatore// 
    char stringa2[]="ciao";                         // un altro modo è il seguente, con il quale l'indice stringa2[1] sarà 'i', stringa2[3] sarà 'o' e così via; non ci sarà bisogno di scrivere '\0//'

    return(0);
}