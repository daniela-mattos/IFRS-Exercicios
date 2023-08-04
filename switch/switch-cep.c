#include <stdio.h>

int main()
{
    int cep;

    printf("Informe o primeiro dígito do cep (de 0 a 9: ");
    scanf("%d", &cep);

switch (cep) {
	case 0:
	case 1:
	case 2:
	case 3:
    	printf("Envie para a região Sudeste (SP, RJ, ES, MG)");
	    break;
	case 4:
	    printf("Envie para a região Região 4 (BA, SE)");
	    break;
	case 5:
	    printf("Envie para a região Região 5 (PE, AL, PB, RN)");
	    break;
	case 6:
	    printf("Envie para a região Região 6 (CE, PI, MA, PA, AP, AM, RR, AC )");
	    break;
	case 7:
	    printf("Envie para a Região 7 (DF, GO, TO, MT, RO, MS)");
	    break;
	case 8:
	case 9:
	    printf("Envie para a Região Sul (PR, SC, RS)");
	    break;
	default:
	    printf("Código inválido.");
}

    return 0;
}
