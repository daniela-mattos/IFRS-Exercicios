#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    
    printf("\n Digite a primeira nota:");
    scanf("%f",&nota1);

    printf("\n Digite a segunda nota:");
    scanf("%f",&nota2);

    printf("\n Digite a terceira nota:");
    scanf("%f",&nota3);

    printf("\n Digite a quarta nota:");
    scanf("%f",&nota4);

    media=((nota1*1)+(nota2*2)+(nota3*3)+(nota4*4))/(1+2+3+4);
    
    if(media<7) {
        printf("\n Media: %.2f", media);
        printf("\n Situação: Reprovado");
    } else { 
        printf("\n Media: %.2f", media);
        printf("\n Situação: Aprovado");
    }

    return 0;
}

