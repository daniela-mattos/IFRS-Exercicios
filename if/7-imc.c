/******************************************************************************

Por exemplo, se você pesa 60Kg e mede 1,67m, você deve utilizar a seguinte fórmula para calcular o IMC:

IMC = 60 ÷ 1,67²
IMC = 60 ÷ 2,78
IMC = 21,5
*******************************************************************************/
#include <stdio.h>

int main()
{

float alt, peso, imc;

    printf("Informe sua altura: ");
    scanf("%f", &alt);
    printf("informe seu peso: ");
    scanf("%f", &peso);
    imc = peso/(alt*alt);

    if(imc>=40) {
        printf("Obesidade grau III");
    } else {
        if(imc>=35) {
            printf("Obesidade grau II");
        } else {
            if(imc>=30) {
                printf("Obesidade grau I");
            } else {
                if(imc>=25) {
                    printf("Você está acima do peso.");
                } else {
                    if(imc>=18.5) {
                        printf("Parabéns! Você está no peso ideal.");
                    } else {
                        printf("Você está abaixo do peso ideal");
                    }
                }
            }
        }
    }
    
    return 0;
}


