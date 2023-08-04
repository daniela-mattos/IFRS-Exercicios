#include <stdio.h>

int main()
{
    int num[10];
    int i, multi=1;
    
    for (i=0; i<10; i++) {
        printf("Informe um número: ");    
        scanf("%d", &num[i]);
        multi = multi * num[i];
    }
    
    printf("A multiplicação dos números é: %d", multi);
  
    return 0;
}
