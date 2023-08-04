
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;
    
    printf("\n Digite a primeira nota:");
    scanf("%f",&nota1);

    printf("\n Digite a segunda nota:");
    scanf("%f",&nota2);

    printf("\n Digite a terceira nota:");
    scanf("%f",&nota3);

    media=(nota1+nota2+nota3)/3;
    
    if(media<7) {
        printf("\n Media: %.2f", media);
        printf("\n Situação: Reprovado");
    } else { 
        printf("\n Media: %.2f", media);
        printf("\n Situação: Aprovado");
    }
    return 0;
}


