
#include <stdio.h>

int resposta(int cod, int qtd) {
    int total;
    
    switch (cod) {
    case 100:
        printf("\n Pedido: %d unidade(s) de Cachorro quente.", qtd);
        total = 10*qtd;
        printf("\n Total: %d", total);
    break;
    case 101:
        printf("\n Pedido: %d unidade(s) de Bauru Simples.", qtd);
        total = 13*qtd;
        printf("\n Total: %d", total);
    break;
    case 102:
        printf("\n Pedido: %d unidade(s) de Bauru c/ ovo.", qtd);
        total = 16*qtd;
        printf("\n Total: %d", total);
    break;
    case 103:
        printf("\n Pedido: %d unidade(s) de Hamburger.", qtd);
        total = 14*qtd;
        printf("\n Total: %d", total);
    break;
    case 104:
        printf("\n Pedido: %d unidade(s) de Cheeseburger. ", qtd);
        total = 16*qtd;
        printf("\n Total: %d", total);
    break;
    case 105:
        printf("\n Pedido: %d unidade(s) de Refrigerante. ", qtd);
        total = 4*qtd;
        printf("\n Total: %d", total);
    break;
    default: printf("\n Código inválido");
    }
    return (total);
}

int main()
{
    int cod, qtd, pedido, totalDia;
    char opcao;
    
    printf("Código \t Especificação \t \t Preço unitário \n");
    printf("100 \t Cachorro quente \t 10.00 \n");
    printf("101 \t Bauru simples \t \t 13.00 \n");
    printf("102 \t Bauru c/ovo  \t \t 16.00 \n");
    printf("103 \t Hamburger    \t \t 14.00 \n");
    printf("104 \t Cheeseburger \t \t 16.00 \n");
    printf("105 \t Refrigerante \t \t 4.00 \n");
    
    while (opcao != 'e') {
        printf("\n\nO que você quer fazer? \n");
        scanf("%s", &opcao);
        
        switch (opcao) {
            case 'a': 
                printf("\n Informe o codigo: \n");
                scanf("%d", &cod);
                printf("\n Informe a quantidade: \n");
                scanf("%d", &qtd);
                pedido = resposta(cod, qtd);
                totalDia = totalDia + pedido;
            break;
            case 'b': 
                printf("\n Informe o codigo: \n");
                scanf("%d", &cod);
                printf("\n Informe a quantidade: \n");
                scanf("%d", &qtd);
                pedido = pedido + resposta(cod, qtd);
                totalDia = totalDia + pedido;
            break;
            case 'c': printf("O total do pedido é: %d", pedido); break;
            case 'd': printf("O total do dia é: %d", totalDia); break;
            case 'e': opcao = 'e'; break;
            default: printf("Código inválido.");
        }
        
        
        
    }
    
    
    return 0;
}




