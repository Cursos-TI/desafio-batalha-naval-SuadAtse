#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int move;
    int tabuleiro[3][5];
    //Deixei em branco para que na hora de formar à figura não dar erro

    printf("Qual habilidade você quer utilizar: \n");
    printf("1 - Cone\n");
    printf("2 - Octaedro\n");
    printf("3 - Cruz\n");
    printf("Escolha: ");
    scanf("%d", &move);

    switch (move)
    {
    case 1:
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                // Uso de condicional para fabricar a figura geométrica com mais facilidade
                if (tabuleiro[i][j] ==  i == 0 && j ==  2 || (i == 1 && j ==  1) || (i == 1 && j ==  2) || (i == 1 && j ==  3) || (i == 2) ){
                    tabuleiro[i][j] = 1;
            }
                else{
                    tabuleiro[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                printf("%d", tabuleiro[i][j]);
            }
            printf("\n");
        }
        break;

    case 2:
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                if (tabuleiro[i][j] ==  i == 0 && j ==  2 || (i == 1 && j ==  1) || (i == 1 && j ==  2) || (i == 1 && j ==  3) || (i == 2 && j == 2) ){
                    tabuleiro[i][j] = 1;
            }
                else{
                    tabuleiro[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                printf("%d", tabuleiro[i][j]);
            }
            printf("\n");
        }
        break;

        case 3:
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                if (tabuleiro[i][j] ==  i == 0 && j ==  2 || (i == 1) || (i == 2 && j == 2) ){
                    tabuleiro[i][j] = 1;
            }
                else{
                    tabuleiro[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                printf("%d", tabuleiro[i][j]);
            }
            printf("\n");
        }
        break;

    default:
        printf("Erro. Tente novamente");
        break;
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
