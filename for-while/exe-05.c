
#include <stdio.h>

int main()
{
    int cont, numero;
    
    cont=2;
    printf("Informe o número de vezes: ");
    scanf("%d", &numero);

    printf("\n 1 elefante se balançava numa teia de aranha,");
    printf("\n Mas como a teia não se arrebentou,");
    printf("\n Foi chamar outro elefante. \n");    
    
    while(cont<numero) {
        printf("\n %d elefantes se balançavam numa teia de aranha", cont);
        printf("\n Mas como a teia não se arrebentou,");
        printf("\n Foram chamar outro elefante. \n");
        cont=cont+1;
    } 
    
    printf("\n %d elefantes se balançavam, numa teia de aranha", cont);
    printf("\n Mas como a teia não se arrebentou,");
    printf("\n Todos foram para o chão!");

    return 0;
}

