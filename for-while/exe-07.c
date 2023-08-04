/******************************************************************************

7 - A poupança rende 0,5% ao mês. Se eu depositar R$100 reais todos os meses, qual 
o valor que terei mês a mês em 2 ANOS?

Ex:
MES 1: 100,00
MES 2: 200,50 (R$0,50 de juros + 100 de Deposito)
MES 3: 301,5025 (1,0025 de juros + 100 de Deposito)

*******************************************************************************/
#include <stdio.h>

int main()
{
  float deposito, rendimento, calc;
  int contador;
  
  deposito=100;
  rendimento=1 + (0.5/100);
  
  for (contador = 1; contador <= 24; contador++){
			calc=(calc*rendimento)+deposito;
	}
 
  printf("%.2f ", calc);

    return 0;
}

