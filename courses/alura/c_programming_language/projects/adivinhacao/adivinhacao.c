#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("***************************************\n");
	printf("* Bem-vindo(a) ao jogo de adivinhação *\n");
	printf("***************************************\n");

	short int numero_secreto, chute, numero_de_tentativas, dificuldade, ganhou, count;
	float pontos;

	int seed = time(0);
	srand(seed);

	numero_secreto = rand() % 100;
	pontos = 1000;

	printf("Selecione a dificuldade:\n");
	printf("[1] Muito fácil (12 tentativas)\n");
	printf("[2] Fácil (8 tentativas)\n");
	printf("[3] Médio (5 tentativas)\n");
	printf("[4] Difícil (2 tentativas)\n");

	scanf("%hd", &dificuldade);

	switch (dificuldade) {
        case 1:
            numero_de_tentativas = 12;
            break;

        case 2:
            numero_de_tentativas = 8;
            break;

        case 3:
            numero_de_tentativas = 5;
            break;

        case 4:
            numero_de_tentativas = 2;
            break;
	}

    for (int i = 1; i <= numero_de_tentativas; i++) {
        float pontos_perdidos;

        count = i;

        printf("Tentativa n° %d de %hd\n", i, numero_de_tentativas);

        printf("Qual número você acha que é?\n");
        scanf("%hd", &chute);

        short int validacao_chute_positivo = (chute > 0);

        if (!validacao_chute_positivo) {
            printf("O chute não pode ser negativo. Tente novamente.\n");
            numero_de_tentativas--;
            continue;
        }

        short int acertou = (chute == numero_secreto);

        if (acertou) {
            ganhou = 1;
            break;
        }

        else if (chute < numero_secreto) {
            printf("O número secreto é maior que seu chute.\n");
            pontos_perdidos = (numero_secreto - chute) * 1.5; // poderia ser feito com abs() da stdlib
            pontos -= pontos_perdidos;
        }

        else if (chute > numero_secreto) {
            printf("O número secreto é menor que seu chute.\n");
            pontos_perdidos = (chute - numero_secreto) * 1.5;
            pontos -= pontos_perdidos;
        }
    }

    if (ganhou) {
        printf("Você ganhou em %hd tentativas! Parabéns!\n", count);
        printf("Pontuação final: %.2f\n", pontos);

    } else {
        printf("Você perdeu... Tente novamente!\n");
    }

	return 0;
}
