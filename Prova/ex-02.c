#include <stdio.h>

int main()
{
    float rendimento, deposito, meta, total;
    int contador=0;
    
    printf("Informe o percentual de rendimento mensal: \n");
    scanf("%f", &rendimento);
    
    printf("Informe o valor do depósito mensal: \n");
    scanf("%f", &deposito);
    
    printf("Informe a meta a ser atingida: \n");
    scanf("%f", &meta);
    
    rendimento=1 + (rendimento/100); //calcula o percentual
    total=0;
    
      while (total<meta){ //testa se a meta é menor do que o total somado no loop
    			total=(total*rendimento)+deposito;
    			contador++;
    			printf("\nSaldo em %d m", contador);
    			if (contador==1) printf("ês: R$ %.2f", total); //testa o número para imprimir o singular ou plural
    			else printf("eses: R$ %2.f", total);
    	}
     
        printf("\n\nO total atingido em %d m", contador);
        if (contador==1) printf("ês: R$ %2.f", total);//testa quantidade para imprimir plural
        else printf("eses foi: R$ %.2f ",  total);
      
      
    printf("\n\nProgramadora: Daniela Mattos");
    
    return 0;
}

