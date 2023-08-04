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
void fator(int num1, int num2) {
    int fatoracao = 2;

    printf("Fatores comuns:\n");

    while (num1 != 1 && num2 != 1) {
        if (num1 % fatoracao == 0 && num2 % fatoracao == 0) {
            printf("%d ", fatoracao);
            num1 /= fatoracao;
            num2 /= fatoracao;
        } else 
            if (num1 % fatoracao == 0) {
            num1 /= fatoracao;
        } else 
            if (num2 % fatoracao == 0) {
            num2 /= fatoracao;
        } else {
            fatoracao++;
        }
    }

    printf("\n");
}
int potencia(int num1, int num2) {
    int resp = 1;
    while (num2 > 0) {
        resp = resp*num1;
        num2--;
    }
    return resp; 
}

int main()
{
    float n1, n2, resposta=0;
    char opcao;
    
    printf("Informe o número: ");
    scanf("%f", &n1);
    printf("Informe outro número: ");
    scanf("%f", &n2); 
    printf("Qual operação deseja realizar? ");
    scanf(" %c", &opcao);

    switch(opcao) {
        case 'A': resposta=soma(n1, n2); break;
        case 'B': resposta=sub(n1, n2); break;
        case 'C': resposta=multi(n1, n2); break;
        case 'D': resposta=divisao(n1, n2); break;
        case 'E': fator(n1, n2); break;
        case 'F': resposta=potencia(n1, n2); break;
        case 'G': break;
        default: printf("Opção Inválida!\n");
    }
    
    printf("\nResultado: %.2f", resposta);

    return 0;
}


