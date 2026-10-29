#include "funcoes.h"

void Menu_principal(void) {
    int opc;

    gotoxy(23, 11);
    printf("1 - Cadastro de Contas");
    gotoxy(23, 12);
    printf("2 - Movimentacoes Financeiras");
    gotoxy(23, 13);
    printf("3 - Sair");

    gotoxy(2, 23);
    printf("Digite sua opcao.: ");
    scanf("%d", &opc);

    switch(opc) {
        case 1:
            Submenu_cadastro();
            break;
        case 2:
            //Tela movimentacao
            break;
        case 3:
            return;
            break;
        default:
            printf("Opcao invalida");
    }
}