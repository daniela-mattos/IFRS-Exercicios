/******************************************************************************
A série de Fibonacci inicia com 0 e 1. 
Os números seguintes são iguais a soma dos dois números anteriores.

Ex. 0, 1, 1, 2, 3, 5, 8, 13, 21. Escreva os 25 primeiros elementos da série de Fibonacci
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n1, n2, aux, cont;
    
    n1=0;
    n2=1;
    aux=0;
    cont=1;
    
    printf(" 0, \n 1, ");
    
    while(cont<=25) {
        aux=n1+n2;
        printf("\n %d, ", aux);
        n1=n2;
        n2=aux;
        cont++;
    }
    

    return 0;
}
