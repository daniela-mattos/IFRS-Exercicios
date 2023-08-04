#include <stdio.h>

int quadrado( int x) {
     return x*x;
}

int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O quadrado do número %d é: %d", num, quadrado(num));
    
    return 0;
}

