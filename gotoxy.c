/*  Autor.....: Luiz Felipe Craveiro
    Data......: 26/10/2026
    Equipe....: 440944-2026 - Felipe Craveiro
    Objetivo..: Define a função de posicionamento do cursor
*/
#include "funcoes.h"

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}