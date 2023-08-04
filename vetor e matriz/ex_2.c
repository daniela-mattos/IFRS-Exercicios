#include <stdio.h>

int main()
{
    int num[10];
    int i, soma=0;
    
    for (i=0; i<10; i++) {
        printf("Informe um número: ");    
        scanf("%d", &num[i]);
        soma = soma + num[i];
    }
    
    printf("A soma dos números é: %d", soma);
  
    return 0;
}
