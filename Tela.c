#include "funcoes.h"

void Tela() {
    int l;
    int c;

    for(l=1;l<25;l++) {
        gotoxy(01, l);
        printf("|");

        gotoxy(80, l);
        printf("|");
    }

    for (c=1;c<80;c++)
    {
        gotoxy(c, 01);
        printf("-");
        gotoxy(c, 04);
        printf("-");
        gotoxy(c, 22);
        printf("-");
        gotoxy(c, 24);
        printf("-");
    }

    gotoxy(03, 02);
    printf("UNICIVE");
    gotoxy(26, 02);
    printf("SISTEMA BANCARIO");
    gotoxy(61, 02);
    printf("ESTRUTURA DE DADOS");

    gotoxy(01,01);
    printf("+");
    gotoxy(80,01);
    printf("+");

    gotoxy(01,04);
    printf("+");
    gotoxy(80,04);
    printf("+");

    gotoxy(01,22);
    printf("+");
    gotoxy(80,22);
    printf("+");

    gotoxy(01,24);
    printf("+");
    gotoxy(80,24);
    printf("+");
}
