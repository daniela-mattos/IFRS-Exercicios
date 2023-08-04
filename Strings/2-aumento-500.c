/******************************************************************************
Uma empresa decide dar um aumento de 30% aos seus funcionários cujo salário é inferior a 500 reais. 
Escreva um programa que leia o salário atual do funcionário e seu nome. 
Escreva o novo salário ou uma mensagem caso o funcionário não tenha direito ao aumento.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[100];
    float salario, aumento=1.30;
    
    printf("Digite o nome do funcionário: \n");
    gets(nome);
    printf("Digite o salário do funcionário: \n");
    scanf("%f", &salario);
 
    if(salario<500) {
        salario=aumento*salario;
        printf("Funcionário: %s \t Novo salário: %.2f \n", nome, salario);
    } else {
        printf("Funcionário: %s \t Novo salário: Não se aplica.", nome);
    }

    return 0;
}

