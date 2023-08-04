#include <stdio.h>

  void pt (char turno) {
        switch (turno) {
            case 'm': printf("Bom dia!"); break;
            case 'n': printf("Boa noite!"); break; 
            case 't': printf("Boa tarde!"); break;
        }
    }
      void en (char turno) {
        switch (turno) {
            case 'm': printf("Good morning!"); break;
            case 'n': printf("Good Night!"); break; 
            case 't': printf("Good afternoon!"); break;
        }
    }
    void es (char turno) {
        switch (turno) {
            case 'm': printf("Buen día!"); break;
            case 't': printf("Buenas tardes!"); break; 
            case 'n': printf("Buenas noches!"); break;
        }
    }
    void al (char turno) {
        switch (turno) {
            case 'm': printf("Guten Morgen!"); break;
            case 't': printf("Guten Tag!"); break; 
            case 'n': printf("Guten Nacht!"); break;
        }
    }
    void ja (char turno) {
        switch (turno) {
            case 'm': printf("おはよう"); break;
            case 'n': printf("おやすみ"); break; 
            case 't': printf("こんにちは"); break;
        }
    }


int main()
{
    int idioma;
    char turno;
    
    do {
        printf("\n\nInforme o idioma: ");
        scanf("%d", &idioma); getchar();
        printf("Informe o turno: ");
        turno = getchar();
    
        switch (idioma) {
            case 1: pt(turno); break;
            case 2: en(turno); break;
            case 3: es(turno); break;
            case 4: al(turno); break;
            case 5: ja(turno); break;
            case 0: ; break;
        } 
    } while(idioma!=0);

    return 0;
}
