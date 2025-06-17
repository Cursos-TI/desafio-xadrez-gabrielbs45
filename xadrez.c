#include <stdio.h>

int main(){
    printf("desafio xadrez!\n");
    printf("novo comit!\n");
    // Simulação do movimento da Torre usando 'for'
    // A Torre move 5 casas para a direita
    printf("Movimento da Torre:\n");
    int casas_torre = 5;
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo usando 'while'
    // O Bispo move 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    int casas_bispo = 5;
    int contador_bispo = 1;
    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // Simulação do movimento da Rainha usando 'do-while'
    // A Rainha move 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    return 0;
}
   