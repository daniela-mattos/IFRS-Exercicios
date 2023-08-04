/******************************************************************************

infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = 18 anos ou mais

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);
    
    if(idade>=18) {
        printf("Categoria Adulto");
        } else {
            if(idade>14) {
                printf("Categoria Juvenil B");
            } else {
                if(idade>11) {
                    printf("Categoria Juvenil A");
                } else {
                    if(idade>8) {
                        printf("Categoria Infantil B");
                    } else {
                        if(idade>=5) {
                        printf("Categoria Infantil A");
                        } else {
                            printf("Idade inválida");
                    }
                }
            }
        }
    }
    return 0;
}

