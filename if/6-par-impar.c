
#include <stdio.h>
#include <string.h>

int main()
{
    int n1;
    char pi[10], pn[10];
    
    printf("\n Digite um número: ");
    scanf("%d",&n1);

    if((n1%2)==0) {
        strcpy(pi, "par");
    } else{
        strcpy(pi, "ímpar");
    }
    
    if(n1>0) {
        strcpy(pn, "positivo");
        } else {
            strcpy(pn, "negativo");
        }
    printf("O número %d é %s e é %s.", n1, pi, pn);

    return 0;
}

