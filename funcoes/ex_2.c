/******************************************************************************
Escreva um programa que leia 3 números. 
O programa deve apresentar a soma e o produto dos 3 números. 
O programa deve ter uma função que recebe os três números e 
retorna a soma, e outra função que recebe os três números e retorna o produto.

*******************************************************************************/
#include <stdio.h>

    int soma( float a, float b, float c) {
         return a+b+c;
    }
    int produto( float a, float b, float c) {
         return a*b*c;
    }

int main()
{
    float n1, n2, n3, resposta;
    
    printf("Informe um número: \n");
    scanf("%f", &n1);
    
    printf("Informe outro número: \n");
    scanf("%f", &n2);
    
    printf("Informe um terceiro número: \n");
    scanf("%f", &n3);
    
    resposta = soma(n1, n2, n3);
    printf("A soma dos números é: %.0f \n", resposta);
    
    resposta = produto(n1, n2, n3);
    printf("O produto dos números é: %.0f ", resposta);

    return 0;
}

