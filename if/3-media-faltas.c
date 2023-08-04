
#include <stdio.h>

int main()
{
    float media;
    int faltas;
    
    printf("Informe a média do aluno: \n");
    scanf("%f", &media);
    printf("Informe o número de faltas do aluno: \n");
    scanf("%d", &faltas);

    if(media>7 && faltas<5) {
        printf("Aluno aprovado!");
    } else {  
        if(faltas>=5) {
        printf("Aluno reprovado por faltas!");
        } else {
            if(media<7) {
            printf("Aluno reprovado: Média insuficiente.");
            }
        }
    }    
    return 0;
}





