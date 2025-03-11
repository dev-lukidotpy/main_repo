#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para tokenizar a string e retornar um array com todos os tokens
char **tokenize_string(char string[], int *num_tokens) {
    char delimiter[] = " ";  // Delimitador utilizado para tokenizar a string

    char *token = strtok(string, delimiter);  // Chamada padrão do strtok
    char **tokenized_string_arr = NULL, **temp;  // Declaração do array que guardará todos os tokens gerados

    int token_count = 0;  // Contador de tokens

    // Processa todos os tokens da string
    while (token != NULL) {
        // Realoca memória para armazenar o próximo token
        temp = realloc(tokenized_string_arr, (token_count + 1) * sizeof(char *));

        if (temp == NULL) {
            printf("Realloc failed\n");
            free(tokenized_string_arr);  // Libera a memória caso ocorra erros
            return NULL;
        } else {
            tokenized_string_arr = temp;
        }

        // Armazena o token no array
        tokenized_string_arr[token_count] = token;
        token_count++;  // Incrementa a variável para que possa ser realocada memória do array

        // Avança para o próximo token
        token = strtok(NULL, delimiter);
    }

    *num_tokens = token_count;  // Retorna o número de tokens
    return tokenized_string_arr;  // Retorna o array com a string tokenizada
}

int main() {
    char sentence[512];  // Array de chars para armazenar a string

    printf("Type in a sentence to tokenize it:\n");
    fgets(sentence, sizeof(sentence), stdin);  // Input

    // Remove a quebra de linha no final da string
    sentence[strcspn(sentence, "\n")] = '\0';

    int num_tokens = 0;  // Variável para armazenar o número de tokens
    char **tokenized_sentence = tokenize_string(sentence, &num_tokens);

    // Mostra todos os tokens armazenados no array
    if (tokenized_sentence != NULL) {
        for (int i = 0; i < num_tokens; i++) {
            printf("Token %d: %s\n", i + 1, tokenized_sentence[i]);
        }

        // Libera a memória antes de finalizar o programa
        free(tokenized_sentence);
    } else {
        printf("Failed to tokenize the sentence.\n");
    }

    return 0;
}
