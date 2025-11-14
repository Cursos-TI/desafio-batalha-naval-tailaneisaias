#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

#define TAM 5
#define NAVIO 3

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[TAM][TAM];

    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = 0;

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    int navioH[NAVIO] = {3, 3, 3};
    int navioV[NAVIO] = {3, 3, 3};

    int lh = 1, ch = 0; // horizontal
    int lv = 0, cv = 3; // vertical

    for (int i = 0; i < NAVIO; i++)
    {
        tabuleiro[lh][ch + i] = navioH[i];
        tabuleiro[lv + i][cv] = navioV[i];
    }

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf("Navio Horizontal:\n");
    for (int i = 0; i < NAVIO; i++)
        printf("  Parte %d -> (%d, %d)\n", i + 1, lh, ch + i);

    printf("\nNavio Vertical:\n");
    for (int i = 0; i < NAVIO; i++)
        printf("  Parte %d -> (%d, %d)\n", i + 1, lv + i, cv);

    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

#define TAM 10
#define NAVIO 3
    int tabuleiro[TAM][TAM];
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = 0;

    int navio1[NAVIO] = {3, 3, 3};
    int navio2[NAVIO] = {3, 3, 3};
    int navio3[NAVIO] = {3, 3, 3};
    int navio4[NAVIO] = {3, 3, 3};

    int l1 = 2, c1 = 1;
    int l2 = 5, c2 = 7;
    int l3 = 0, c3 = 0;
    int l4 = 0, c4 = 9;

    if (c1 + NAVIO > TAM)
        return 1;
    if (l2 + NAVIO > TAM)
        return 1;
    if (l3 + NAVIO > TAM || c3 + NAVIO > TAM)
        return 1;
    if (l4 + NAVIO > TAM || c4 - (NAVIO - 1) < 0)
        return 1;

    for (int i = 0; i < NAVIO; i++)
    {
        if (tabuleiro[l1][c1 + i] == 3)
            return 1;
        if (tabuleiro[l2 + i][c2] == 3)
            return 1;
        if (tabuleiro[l3 + i][c3 + i] == 3)
            return 1;
        if (tabuleiro[l4 + i][c4 - i] == 3)
            return 1;
    }

    for (int i = 0; i < NAVIO; i++)
    {
        tabuleiro[l1][c1 + i] = navio1[i];
        tabuleiro[l2 + i][c2] = navio2[i];
        tabuleiro[l3 + i][c3 + i] = navio3[i];
        tabuleiro[l4 + i][c4 - i] = navio4[i];
    }

    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

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
