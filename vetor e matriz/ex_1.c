#include <stdio.h>

int main()
{
    int num[10];
    int i;
    
    for (i=0; i<10; i++) {
        printf("Informe um número: ");    
        scanf("%d", &num[i]);
    }
    
    printf("ordem crescente\n");
    for (i=0; i<10; i++) printf("%d: %d\n", i+1, num[i]);    //+1 para mostrar para o usuário de 1 a 10 e não como 0 a 9
    
    printf("ordem decrescente\n");
    for (i=9; i>=0; i--) printf("%d: %d\n", i+1, num[i]);
    
    

    return 0;
}


