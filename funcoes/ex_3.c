#include <stdio.h>

int soma( float a, float b) {
     return a+b;
}
int multi( float a, float b) {
     return a*b;
}
int divisao( float a, float b) {
     return a/b;
}
int sub( float a, float b) {
     return a-b;
}

int main()
{
    char opcao;
    float num1, num2, resposta;
    
    printf("Digite um número: ");
    scanf("%f", &num1);
    
    printf("Digite outro número: ");
    scanf("%f", &num2);
    
    printf("Digite uma das opções, A B C ou D: ");
    scanf(" %c", &opcao);

    switch(opcao) {
        case 'A': resposta=soma(num1, num2); break;
        case 'B': resposta=multi(num1, num2); break;
        case 'C': resposta=divisao(num1, num2); break;
        case 'D': resposta=sub(num1, num2); break;
        default printf("Opção Inválida!");
    }
    
    printf("\nResultado: %.2f", resposta);
    
    return 0;
}




