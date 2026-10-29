#include "funcoes.h"

void Submenu_inclusao(void) {
    int opc;

    gotoxy(23, 11);
    printf("1 - Inclusao ao inicio");
    gotoxy(23, 12);
    printf("2 - Inclusao por posicao");
    gotoxy(23, 13);
    printf("3 - Inclusao ao final");
    gotoxy(23, 14);
    printf("4 - Voltar");

    limpa_mensagem();
    gotoxy(2, 23);
    printf("Digite sua opcao.: ");
    scanf("%d", &opc);

    switch(opc) {
        case 1:
        //Tela_cadastro
        break;
    }

}