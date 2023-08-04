/******************************************************************************

 Escreva um programa que leia o nome e a idade do usuário e 
 retorne uma mensagem indicando se o usuário é maior de idade ou não.  
 Vamos considerar 18 anos completos.
Ex: "FULANO é maior de idade" ou "FULANO é Menor de idade"

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[100];
    int idade;
    
    printf("Informe o nome: \n");
    gets(nome);
    printf("Informe a idade: \n");
    scanf("%d", &idade);
    
    if(idade<18) printf("%s é menor de idade.", nome);
     else printf("%s é maior de idade.", nome);
    

    return 0;
}
