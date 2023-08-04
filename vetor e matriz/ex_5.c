#include <stdio.h>

int main()
{
    int notas[10];
    int i, media=0, aprovados=0, reprovados=0;
    
    for (i=0; i<10; i++) {
        printf("Informe um número: ");    
        scanf("%d", &notas[i]);
        media = media + notas[i];
        
        if(notas[i]>=7) aprovados++;
        else reprovados++;
        
    }
    
    media = media/10;
    
    printf("\nA média geral das notas é: %d", media);
    printf("\nO número de aprovados é: %d", aprovados);
    printf("\nO número de reprovados é: %d", reprovados);
  
    return 0;
}
