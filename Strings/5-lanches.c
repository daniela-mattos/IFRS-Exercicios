/******************************************************************************
Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um item.
Ao final escreva um resumo do pedido:
Ex
" Pedido: 5 unidade(s) de Cachorro Quente"
"Total R$25,00"
*******************************************************************************/
#include <stdio.h>

int main()
{
    int cod, qtd;
    
    printf("Código do lanche \t Especificação \t \t  Preço unitário \n");
    printf("100 \t \t \t Cachorro quente \t \t 5.00 \n");
    printf("101 \t \t \t Bauru simples \t \t 6.00 \n");
    printf("102 \t \t \t Bauru c/ovo  \t \t 8.00 \n");
    printf("103 \t \t \t Hamburger    \t \t 5.00 \n");
    printf("104 \t \t \t Cheeseburger \t \t 7.50 \n");
    printf("105 \t \t \t Refrigerante \t \t 2.00 \n");
    
    printf("\n Informe o codigo do pedido: \n");
    scanf("%d", &cod);
    printf("\n Informe a quantidade: \n");
    scanf("%d", &qtd);
    
    if(cod==100) {
        printf("Pedido: %d unidade(s) de Cachorro quente.", qtd);
        printf("Total: %d", (5*qtd));
    } else {
        if(cod==101) {
            printf("Pedido: %d unidade(s) de Bauru Simples.", qtd);
            printf("Total: %d", 6*qtd);
        } else {
            if(cod==102) {
            printf("Pedido: %d unidade(s) de Bauru c/ ovo.", qtd);
            printf("Total: %d", 8*qtd);
            } else {
                if(cod==103) {
                printf("Pedido: %d unidade(s) de Hamburger.", qtd);
                printf("Total: %d", 5*qtd);
            } else {
                if(cod==104) {
                    printf("Pedido: %d unidade(s) de Cheeseburger.", qtd);
                    printf("Total: %f", 7.50*qtd);
                } else {
                    if(cod==105) {
                    printf("Pedido: %d unidade(s) de Refrigerante.", qtd);
                    printf("Total: %d", 2*qtd);
                    } else {
                        printf("Código inválido");
                    }
                }
            }
        }
    }
}
    return 0;
}

