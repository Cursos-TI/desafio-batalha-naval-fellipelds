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

    int cone[3][5] = { {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1} };
    int oct[3][3] = { {0, 1, 0}, {1, 1, 1}, {0, 1, 0} };
    int cruz[3][5] = { {0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 1, 0, 0} };

    printf("\nTABULEIRO DA BATALHA NAVAL!\n\n");
    printf("Posições ocupadas: 3\n");
    printf("Posições desocupadas: 0\n\n");
    
    for(int i = 0; i < 10; i++)
    { for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            
        }
    }
    
    int linhaCone = 3, colunaCone = 0;
    int linhaOct = 7, colunaOct = 7;
    int linhaCruz = 3, colunaCruz = 5;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int x = linhaCone + i;
            int y = colunaCone + j;
            if (x < 10 && y < 10)  // garante que não sai do limite
                tabuleiro[x][y] += cone[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int x = linhaOct + i;
            int y = colunaOct + j;
            if (x < 10 && y < 10)  // garante que não sai do limite
                tabuleiro[x][y] += oct[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int x = linhaCruz + i;
            int y = colunaCruz + j;
            if (x < 10 && y < 10)
                tabuleiro[x][y] += cruz[i][j];
        }
    }
    
    printf("\nTABULEIRO COM AS HABILIDADES ESPECIAIS INSERIDAS!\n");
    printf("Posições dos Navios: 3\n");
    printf("Posições das Habilidades: 1\n\n");

    for(int i = 0; i < 10; i++)
    { for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }    

    printf("\n");

    return 0;
}