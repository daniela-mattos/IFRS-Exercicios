#include <stdio.h>

int main()
{
    int num=1, contador, contaD, contaP;
    float media=0, calc=0;
    
    while(num!=0) {
        printf("\n Informe um número positivo: ");
        scanf("%d", &num);
        
        if(num!=0) { //começa testando se o número é zero
             media=media+num;
             contador++;
             if(num % 2 == 0) { //tabuada dos pares
                 for(contaP = 1; contaP <= 10; contaP++){
             			printf("%d * %d = %d \n" , contaP, num, contaP*num);
                 } 
             }else { //divisor dos ímpares
                    contaD=num; 
                    while(contaD>=1) {
                        
                        if(num%contaD==0) {
                            printf(" %d ", contaD);
                            contaD--;
                        } else { 
                            contaD--;
                        }
                    }
            }
        } else printf("\nVocê encerrou o programa. \n"); //informa se o usuário encerrou digitando zero    
    }
    if(contador==0) { //testa o zero quando este é o primeiro valor digitado
        printf("Não foram registrados números para o cálculo.");       
    } else {
        calc=media/contador;
        printf("\nA média dos números digitados é: %.2f", calc);
    }

    printf("\n\nProgramadora: Daniela Mattos \n");
    
    return 0;
}






