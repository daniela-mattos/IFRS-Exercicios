#include <stdio.h>

int main()
{

    int cod, ze, hug, lui, branco, nulo;
    
    ze=0;
    hug=0;
    lui=0;
    branco=0;
    nulo=0;
    cod=10; //número aleatório para dar início ao looping.
    
    while(cod!=0) {
        printf("\n Digite o código do candidato: ");
        scanf("%d", &cod);
        
        if(cod==1) ze=ze+1;
        else if (cod==2) hug=hug+1;
             else if(cod==3) lui=lui+1;
                  else if(cod==4) branco=branco+1;
                       else if (cod==5) nulo=nulo+1;
                            else if (cod==0) printf("\n Votação encerrada! \n");
                                 else printf("\n Código inválido! \n");
    }
    
    printf("\n Zezinho obteve: %d voto(s).", ze);
    printf("\n Huguinho obteve: %d voto(s).", hug);
    printf("\n Luizinho obteve: %d voto(s).", lui);
    printf("\n Voto(s) em Branco: %d", branco);
    printf("\n Voto(s) Nulo(s): %d", nulo);
    
    
    return 0;
}

