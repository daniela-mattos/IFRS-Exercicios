/*
Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago 
por aquele lanche. Os itens serão lidos até que seja incluído um código inválido, encerrando o pedido. 
Ao final, escreva o valor total do pedido.
*/
#include <stdio.h>

int main()
{
    int cod, qtd, controle;
    float preco, total, pedido;
    
    printf("Código do lanche \t Especificação \t \t  Preço unitário \n");
    printf("100 \t \t \t Cachorro quente \t \t 11.00 \n");
    printf("101 \t \t \t Bauru simples \t \t \t 13.00 \n");
    printf("102 \t \t \t Bauru c/ovo  \t \t \t 15.00 \n");
    printf("103 \t \t \t Hamburger    \t \t \t 11.00 \n");
    printf("104 \t \t \t Cheeseburger \t \t \t 13.00 \n");
    printf("105 \t \t \t Refrigerante \t \t \t 3.00 \n");
    
    total=0;
    while(controle==0) {
        
        printf("\n Informe o codigo do pedido: \n");
        scanf("%d", &cod);
            if (cod==100) preco=11;
            else if (cod==101) preco=13;
                    else if (cod==102) preco=15;
                         else if (cod==103) preco=11;
                              else if (cod==104) preco=13;
                                   else if (cod==105) {
                                       preco=3;
                                        } else {    
                                            printf("Código inválido \n");
                                            controle=1;
                                        }
                                       
    
        if(controle==0&&cod!=0) { 
    
        printf("Informe a quantidade: \n");
        scanf("%d", &qtd);  
        
        if(cod==100) {
            printf("\n Pedido: %d unidade(s) de Cachorro quente.", qtd);
            pedido=(preco*qtd);
            total=total+pedido;
            printf("\n Total: %.2f \n", pedido);
        } else {
            if(cod==101) {
                printf("\n Pedido: %d unidade(s) de Bauru Simples.", qtd);
                pedido=(preco*qtd);
                total=total+pedido;
                printf("\n Total: %.2f \n ", pedido);
            } else {
                if(cod==102) {
                printf("\n Pedido: %d unidade(s) de Bauru c/ ovo.", qtd);
                pedido=(preco*qtd);
                total=total+pedido;
                printf("\n Total: %.2f \n ", pedido);
                } else {
                    if(cod==103) {
                    printf("\n Pedido: %d unidade(s) de Hamburger.", qtd);
                    pedido=(preco*qtd);
                    total=total+pedido;
                    printf("\n Total: %.2f \n ", pedido);
                    } else {
                        if(cod==104) {
                            printf("\n Pedido: %d unidade(s) de Cheeseburger.", qtd);
                            pedido=(preco*qtd);
                            total=total+pedido;
                            printf("\n Total: %.2f \n ", pedido);
                        } else {
                            if(cod==105) {
                                printf("\n Pedido: %d unidade(s) de Refrigerante.", qtd);
                                pedido=(preco*qtd);
                                total=total+pedido;
                                printf("\n Total: %.2f \n ", pedido);
                            } else {
                            
                                }
                            }
                        }
                    }
                }
            }
        }
    
}   
printf("\n Total gasto com lanches: %.2f", total);

    return 0;
}
