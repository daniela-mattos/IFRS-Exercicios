/******************************************************************************

Escreva um programa que leia duas strings, compare as duas e indique o tamanho de cada string, 
o espaço em memória ocupado por cada string. Concatenar as duas strings. 
Antes de concatenar verifique se a string de destino tem  espaço suficiente para a concatenação, 
caso o espaço não seja suficiente, escreva uma mensagem de erro.


*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char p1[10], p2[10];
    int t1, t2, v1, v2;

    printf("Digite uma palavra de até 10 caracteres: \n");
    gets(p1);
    printf("Digite outra palavra de até 10 caracteres: \n");
    gets(p2);
    
    if(strcmp (p1, p2)) printf("As palavras digitadas são diferentes. \n"); /* strcmp compara as strings */
    else printf("As palavras digitadas são iguais. \n");
    
    t1 = strlen(p1); /* strlen confere tamanho da string*/
    t2 = strlen(p2);
    printf("A primeira palavra tem %d bytes. \n", t1);
    printf("A segunda palavra tem %d bytes. \n", t2);

    v1 = sizeof(p1);
    v2 = sizeof(p2); /* sizeof informa o tamanho da variável */
    
    printf("A primeira variável tem %d bytes de espaço. \n", v1);
    printf("A segunda variável tem %d bytes de espaço. \n", v2);

    if(t1+t2> sizeof(p1)) {
        printf("As palavras não podem ser concatenadas");
    } else {
        strcat (p1, p2); /*concatena a segunda com a primeira string*/
        printf(" As palavras concatenadas: %s.", p1);
    }
    return 0;
}




