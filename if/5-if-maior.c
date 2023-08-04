
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    printf("\n Digite o primeiro número: ");
    scanf("%d",&n1);
    
    printf("\n Digite o segundo número: ");
    scanf("%d",&n2);

    printf("\n Digite o terceiro número: ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3) {
        printf("\nO maior número é: %d", n1);
    } else {
        if(n2>n1 && n2>n3) {
            printf("\n O maior número é: %d", n2);
        } else {
            printf("\n O maior número é: %d", n3);
            
        }
    }


    return 0;
}

