/******************************************************************************
Faça um programa que leia as notas de 2 provas e um trabalho e o numero de faltas. 
Calcule a média aritmética. E indique o conceito: 

A para (8.0 a 10),
B para (7.0 a 7.9),
C para (6.0 a 6.9),
D para (0.0 a 5.9)
E para reprovado por faltas. Maior ou igual a 5.
Escreva "Reprovado" ou "Aprovado".

*******************************************************************************/
#include <stdio.h>

int main()
{

    float nota1, nota2, trabalho, media;
    int faltas;
    
    printf("Informe a nota da prova 1: \n");
    scanf("%f", &nota1);
    printf("Informe a nota da prova 2: \n");
    scanf("%f", &nota2);
    printf("Informe a nota do trabalho: \n");
    scanf("%f", &trabalho);
    printf("Informe o número de faltas: \n");
    scanf("%d", &faltas);
    
    media=(nota1+nota2+trabalho)/3;
    
    if(faltas>=5) { 
        printf("Reprovado por faltas!");
    } else {
        if(media>=8) {
            printf("Conceito A \t Aprovado!");
        } else {
            if(media>=7) {
                printf("Conceito B \t Aprovado!");
            } else {
                if(media>=6) {
                    printf("Conceito C \t Aprovado!");
                } else {
                    printf("Conceito D \t Reprovado!");
                    
                    }
                }
            }
        }
        
    

    return 0;
}


