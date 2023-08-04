#include <stdio.h>

int main()
{
   int notas100, notas50, notas10, notas5, notas1, x;
   
    printf("Digite um valor inteiro para receber em notas de 100, 50, 10, 5 ou 1: ");
    scanf("%d", &x);
    
    if((x / 100)>= 1) notas100 = x / 100;

    if((x % 100) >= 50) notas50 = (x % 100) / 50 ;

    if((x / 50) > 10) notas10 = (x % 50) / 10;
    
    if((x / 10) > 5) notas5 = (x % 10) / 5;

    if((x / 5) > 1) notas1 = x % 5;

    printf("\n O número de notas de cada valor é: ");
    printf("\n %d notas de 100", notas100);
    printf("\n %d notas de 50", notas50);
    printf("\n %d notas de 10", notas10);
    printf("\n %d notas de 5", notas5);
    printf("\n %d notas de 1", notas1);

    
    
    

    return 0;
}
