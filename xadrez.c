#include <stdio.h>

// Definindo constantes para as direções de movimentação das peças
#define MOVIMENTO_BISPO 5   // 5 casas para a diagonal superior direita
#define MOVIMENTO_TORRE 5   // 5 casas para a direita
#define MOVIMENTO_RAINHA 8  // 8 casas para a esquerda

int main() {
    // Definindo variáveis para armazenar os movimentos das peças
    int i;
    
    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < MOVIMENTO_BISPO; i++) {
        // O Bispo se move na diagonal superior direita, combina "Cima" e "Direita"
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimentação da Torre:\n");
    for (i = 0; i < MOVIMENTO_TORRE; i++) {
        // A Torre se move apenas para a direita
        printf("Direita\n");
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimentação da Rainha:\n");
    for (i = 0; i < MOVIMENTO_RAINHA; i++) {
        // A Rainha se move para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
