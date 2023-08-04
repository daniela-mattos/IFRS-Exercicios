
#include <stdio.h>

int main()
{
	int notas[]={100,50,20,10,5,2,1};
	int saque, i, cedulas;
	printf("Digite o valor do saque: ");
	scanf("%d",&saque);
	
	for(i=0;i<7;i++){
	  cedulas=saque/notas[i];
	  if(cedulas!=0) printf("%d cedulas de R$%d.00\n",cedulas,notas[i]);
	  saque = saque - ((saque/notas[i])*(notas[i]));
	}

    return 0;
}

