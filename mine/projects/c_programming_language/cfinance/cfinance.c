#include "cfinance.h"
#include "strcen.h"

void header() {
    system("cls");

    strmult("=", 66, 4);
    strmult("=", 70, 2);
    strcen("", 70, '=', 4, 2);
    strcen("CFINANCE", 70, '=', 2, 2);
    strcen("A Ferramenta Minimalista de Gerenciamento de Finanças do Windows", 70, '=', 2, 2);
    strcen("", 70, '=', 4, 2);
    strmult("=", 70, 2);
    strmult("=", 66, 4);

    printf("\n");
}

void landing() {
    header();

    printf("O que você deseja fazer?\n");

    printf("[1] Incluir nova transação");
    printf("[2] Gerenciar transações");
    printf("[3] Incluir fontes");
    printf("[4] Visualizar transações");
    printf("[5] Área de investimento")
    printf("[6] Sair da aplicação");


}

int main() {
    landing();

    return 0;
}
