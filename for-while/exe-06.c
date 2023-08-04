
#include <stdio.h>
#include <string.h>

int main()
{
    int cont;
    int contador = 10;
    int inc = 1; //abreviação de incomodam
    char ele[] = "incomodam "; //armazena string para repetir
    char soma[1000] = "incomodam "; //vai somar as repetições da string

    cont=1;


    do {
        printf("\n %d", cont);
                if(cont==1) printf(" elefante incomoda muita gente.");
                else printf(" elefantes incomodam muita gente.");
        cont=cont+1;
        strcat (soma, ele);
        printf("\n %d elefantes %s muito mais", cont, soma);
        cont=cont+1;
        strcat (soma, ele);
        
    } while(cont<=9);
    
//segunda parte, vai descrescer
    printf("\n");
    while (contador > 1) {
        
        printf(" %d elefantes incomodam muita gente \n", contador);
        contador--;
        
        if (contador==1) {
            printf(" %d elefante incomoda muito menos. ", contador);
            contador=0;
        } else { 
            inc=2;
        printf(" %d elefantes ", (contador));
        do {
            printf("incomodam ");
            inc++;
        } while (inc <= (contador+1));
        printf(" muito mais \n");
        contador--; 
        } 
    } 
}


