/******************************************************************************
Faça um programa que carregue uma matriz 3x3 de números inteiros. Calcule:

a - o maior número
b - o menor número
c - a média dos números
d - a soma da primeira linha
e - o produto (multiplicação) da diagonal principal

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[3][3];
    int x, y, soma=0, media=0, maior, menor, multi=1;
    
    for(x=0;x<3;x++) {
        for(y=0;y<3;y++) {
            printf("Informe um número: ");
            scanf("%d", &numeros[x][y]);
            
            media = media + numeros[x][y];
        }
    }
    
    for(y=0;y<3;y++) {
        soma = soma + numeros[1][y];
    }

    maior = numeros [1][1];
    menor = numeros [1][1];

    for(x=0;x<3;x++) {
        for(y=0;y<3;y++) {        
            if(numeros[x][y] < menor) menor = numeros[x][y];
            if(numeros[x][y] > maior) maior = numeros[x][y];
            if(x==y) multi = multi * numeros[x][y]; //produto dos números na diagonal principal
        }   
    }
    media = media / 9;
    printf("\nA média é: %d", media);
    printf("\nA soma da primeira linha é: %d ", soma);
    printf("\nO produto da diagonal é: %d", multi);
    printf("\nO maior número é: %d", maior);
    printf("\nO menor número é: %d", menor);

    return 0;
}
