#include <stdio.h>

int main() {
    
    int x = 0;
    int tabuleiro[10][10] = {
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 3, 3, 3, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 3, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 3, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    printf("\nTABULEIRO DA BATALHA NAVAL!\n\n");
    printf("Posições ocupadas: 3\n");
    printf("Posições desocupadas: 0\n\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d %d %d %d %d %d %d %d %d %d\n", tabuleiro[x][0], tabuleiro[x][1], tabuleiro[x][2], tabuleiro[x][3], tabuleiro[x][4], tabuleiro[x][5], tabuleiro[x][6], tabuleiro[x][7], tabuleiro[x][8], tabuleiro[x][9]);
        x++;
    }
        printf("\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
