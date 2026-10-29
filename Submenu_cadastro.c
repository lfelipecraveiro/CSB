#include "funcoes.h"

void Submenu_cadastro(void) {
    int opc;

    gotoxy(23, 11);
    printf("1 - Inclusao");
    gotoxy(23, 12);
    printf("2 - Alteracao");
    gotoxy(23, 13);
    printf("3 - Consulta");
    gotoxy(23, 14);
    printf("4 - Exclusao");
    gotoxy(23, 15);
    printf("5 - Voltar");

    limpa_mensagem();
    gotoxy(2, 23);
    printf("Digite sua opcao.: ");
    scanf("%d", &opc);

    switch(opc) {
        case 1:
            Submenu_inclusao();
            break;
        case 2:
            //Submenu alteracao
            break;
        case 3:
            //Submenu consulta
            break;
        case 4:
            //Submenu exclusao
            break;
        case 5:
            break;
        default:
            printf("Opcao invalida!");
    }

}