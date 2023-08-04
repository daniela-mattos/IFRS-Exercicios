#include <stdio.h>

int main()
{
    
    int cont, n1;
    
    cont=0;
    n1=0;
    
    while(cont<=20) {
        if(n1==2) {
            printf("\n %d é um número primo.", n1);
        
        } else {
            if(n1==1) {
            printf("\n %d é um número primo.", n1);
            
            } else {
                if(n1%2!=0) {
                printf("\n %d é um número primo.", n1);
                n1++;
                }   
            }
        }    
        cont++;
        n1++;    
    }
    

    return 0;
}
