
#include <stdio.h>

int main()
{
    int contador, votoV=0, votoP=0, candidatoA=0, candidatoB=0, candidatoC=0, candidatoD=0, nuloV=0, Vbranco=0, nuloP=0, Pbranco=0, candidatoX=0, candidatoY=0, candidatoZ=0;
    float totalvotoV=0, totalvotoP=0;
    
    contador=1;
    
    while(contador<=7) {
        
        printf("\nEleitor %d, vote para vereador: ", contador); //contador mostra número do eleitor
        scanf("%d", &votoV); 
        switch (votoV) { //registra os votos de acordo com o código definido.
            case 66666: candidatoA++; break;
            case 77777: candidatoB++; break;
            case 88888: candidatoC++; break;
            case 99999: candidatoD++; break;
            case 111: Vbranco++; break;
            default: nuloV++;
            }
        
        printf("Eleitor %d, vote para prefeito: ", contador); //contador mostra número do eleitor
        scanf("%d", &votoP);
        switch (votoP) { //registra os votos para prefeito de acordo com o código definido.
            case 99: candidatoX++; break;
            case 88: candidatoY++; break;
            case 77: candidatoZ++; break;
            case 111: Pbranco++; break;
            default: nuloP++;
            }
        contador++;
        
    }
    //bloco que calcula total de votos válidos
    totalvotoV=(candidatoA+candidatoB+candidatoC+candidatoD);
    totalvotoP=(candidatoX+candidatoY+candidatoZ);
    
    //inicia bloco de resultados para vereador
    printf("\n\nTotal de votos válidos para vereador: %.0f", totalvotoV);
    
    printf("\nTotal de votos para vereador A: %d %.2f %% ", candidatoA, candidatoA/totalvotoV*100);//expressão que mostra percentual de votos
    printf("\nTotal de votos para vereador B: %d %.2f %%", candidatoB, candidatoB/totalvotoV*100);
    printf("\nTotal de votos para vereador C: %d %.2f %% ", candidatoC, candidatoC/totalvotoV*100);
    printf("\nTotal de votos para vereador D: %d %.2f %% ", candidatoD, candidatoD/totalvotoV*100);
    
    printf("\n\nTotal de votos brancos: %d.", Vbranco);
    printf("\nTotal de votos nulos: %d.", nuloV);
    
    //inicia bloco de resultados para prefeito
    printf("\n\nTotal de votos válidos para prefeito: %.0f", totalvotoP);//variável declarada como float, precisa do .0f pra mostrar valor certo sem casas depois da vírgula
    
    printf("\nTotal de votos para prefeito X: %d %.2f %% ", candidatoX, candidatoX/totalvotoV*100);
    printf("\nTotal de votos para prefeito Y: %d %.2f %% ", candidatoY, candidatoY/totalvotoV*100);
    printf("\nTotal de votos para prefeito Z: %d %.2f %%", candidatoZ, candidatoZ/totalvotoV*100);

    printf("\nTotal de votos brancos: %d.", Pbranco);
    printf("\nTotal de votos nulos: %d.", nuloP);

    printf("\n\nProgramadora: Daniela Mattos");

    return 0;
}


    


