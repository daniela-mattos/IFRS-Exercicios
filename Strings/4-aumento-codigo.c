/******************************************************************************
Leia o Nome do Funcionário, salário atual e código da função. De acordo com a tabela abaixo, indique o novo salário.
Código | Cargo        | Aumento
1      | Escriturário | 30%
2      | Secretário   | 25%
3      | Caixa        | 20%
4      | Gerente      | 10%
5      | Diretor      | 1%
Indique uma mensagem de erro se o código não existir.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[100];
    float salario, aumento;
    int codigo=0;
    
    printf("Digite o nome do funcionário: \n");
    gets(nome); /* GETS pega todo o texto, com espaços, diferente do scanf, que pega só até o pespaço. */
    printf("Digite o código da função: \n");
    scanf("%d", &codigo);
    printf("Digite o salário do funcionário: \n");
    scanf("%f", &salario);
 
    if(codigo==1) {
        aumento=1.30*salario;
        printf("Funcionário: %s \t Escriturário \t Novo salário: %.2f \n", nome, aumento);
    } else {
        if(codigo==2) {
            aumento=1.25*salario;
            printf("Funcionário: %s \t Secretário \t Novo salário: %2.f \n", nome, aumento);
        } else {
            if(codigo==3) {
                aumento=1.20*salario;
                printf("Funcionário: %s \t Caixa \t Novo salário: %2.f \n", nome, aumento);
            } else {
                if(codigo==4) {
                    aumento=1.10*salario;
                    printf("Funcionário: %s \t Gerente \t Novo salário: %2.f \n", nome, aumento);
                } else {
                    if(codigo==5) {
                        aumento=0.1*salario;
                        printf("Funcionário: %s \t Diretor \t Novo salário: %2.f \n", nome, aumento);
                    } else {
                        printf("Código inválido");
                    }
                }
            }
        }
        
    }

    return 0;
}




