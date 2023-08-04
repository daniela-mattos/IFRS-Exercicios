
#include <stdio.h>
#include <string.h>

int main()
{
    int cont, incomoda;
    int contador = 10;
    int inc = 1; //abreviação de incomodam
    char ele[] = "incomodam "; //armazena string para repetir
    char soma[1000] = "incomodam "; //vai somar as repetições da string

    cont=1;
    incomoda=0;


    do {
        printf("\n %d", cont);
                if(cont==1) { 
                    printf(" elefante incomoda muita gente.");
                    incomoda++;
                } else {
                    printf(" elefantes incomodam muita gente.");
                    incomoda++;
                }
        cont=cont+1;
        incomoda++;
        strcat (soma, ele);
        incomoda++;
        printf("\n %d elefantes %s muito mais", cont, soma);
        incomoda++;
        cont=cont+1;
        strcat (soma, ele);
        incomoda++;
        
    } while(cont<=9);
    
//segunda parte, vai descrescer
    printf("\n");
    while (contador > 1) {
        
        printf(" %d elefantes incomodam muita gente \n", contador);
        contador--;
        incomoda++;
        
        if (contador==1) {
            printf(" %d elefante incomoda muito menos. ", contador);
            contador=0;
            incomoda++;
        } else { 
            inc=2;
            printf(" %d elefantes ", (contador));
            incomoda++;
        do {
            printf("incomodam ");
            incomoda++;
            inc++;
        } while (inc <= (contador+1));
        printf(" muito menos \n");
        contador--; 
        incomoda++;
        } 
    } 

    printf("\n \n Incomoda aparece %d vezes.", incomoda);
}



