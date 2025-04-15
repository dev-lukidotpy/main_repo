#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef struct {
    char name[8];
    short int code;
    short int weakness;
    short int advantage;
} OPTION;

const OPTION rock = {.name = "Rock", .code = 1, .weakness = 2, .advantage = 3};
const OPTION paper = {.name = "Paper", .code = 2, .weakness = 3, .advantage = 1};
const OPTION scissor = {.name = "Scissor", .code = 3, .weakness = 1, .advantage = 2};

const OPTION options[3] = {rock, paper, scissor};

int main() {
    system("cls");

    puts("    ==============================  ");
    puts("  ====                          ====  ");
    puts("====    ROCK, PAPER, SCISSORS!    ====");
    puts("  ====                          ====  ");
    puts("    ==============================  \n");

    puts("     Press 'ENTER' to continue...    ");
    getchar();

    system("cls");

    puts("How to play\n");
    puts("1. Pick between 'rock', 'paper' or 'scissor' by typing its corresponding number in the keyboard");
    puts("2. Paper beats rock");
    puts("3. Scissor beats paper");
    puts("4. Rock beats scissor");
    puts("5. The first one to reach 3 points is the winner");
    puts("6. On tie, nobody scores\n");

    puts("Good luck!\n");

    puts("Press 'ENTER' to continue...");
    getchar();

    srand(time(0));

    short int players_score = 0;
    short int computers_score = 0;
    short int count = 1;

    do {
        system("cls");

        printf("MATCH %hd\n\n", count);

        short int computers_pick = (short int)(rand() % 3) + 1;
        short int players_pick;

        puts("[1] Rock");
        puts("[2] Paper");
        puts("[3] Scissor\n");

        scanf("%hd", &players_pick);

        system("cls");

        printf("MATCH %hd\n\n", count);

        printf("Player's pick: %s\n", options[players_pick - 1].name);
        printf("Computer's pick: %s\n\n", options[computers_pick - 1].name);

        Sleep(3000);

        // Correct win conditions
        if (players_pick == options[computers_pick - 1].weakness) {
            puts("Player has won!");
            players_score++;
        }
        else if (computers_pick == options[players_pick - 1].weakness) {
            puts("Computer has won!");
            computers_score++;
        }
        else {
            puts("It's a tie... Nobody scored!");
        }

        Sleep(3000);

        system("cls");

        printf("MATCH %hd\n\n", count);

        if (players_score < 3 && computers_score < 3) {
            puts("Partial Score\n");
            printf("Player's score: %hd\n", players_score);
            printf("Computer's score: %hd\n", computers_score);
        }

        Sleep(3000);

        count++;
    } while (players_score < 3 && computers_score < 3);

    system("cls");

    puts("Final Score\n");
    printf("Player's score: %hd\n", players_score);
    printf("Computer's score: %hd\n\n", computers_score);

    if (players_score > computers_score) {
        puts("Player wins the game!");
    } else {
        puts("Computer wins the game!");
    }

    return 0;
}
