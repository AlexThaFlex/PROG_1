#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void imprimeTabuleiro(char tabuleiro[LINHAS][COLUNAS])
{
    printf("\tTic Tac Toe\n"); // jogo do galo
    for(int i = 0; i < LINHAS; i++)
    {
        for(int j = 0; j < COLUNAS; j++)
        {
            printf("%c", tabuleiro[i][j]);
            if(j != COLUNAS - 1) printf(" | ");
        }
        printf("\n");
        if(i != LINHAS - 1) {
            for(int j = 0; j < COLUNAS; j++) printf("---");
            printf("\n");
        }
    }
}

int haVencedor(char tabuleiro[LINHAS][COLUNAS])
{
    int flag;
    char c;
    for(int i = 0; i < LINHAS; i++)
    {
        flag = 1;
        c = tabuleiro[i][0];
        for(int j = 1; j < COLUNAS; j++)
        {
            if(tabuleiro[i][j] != c) {
                flag = 0;
                break;
            }
        }
    }
    if(flag) return 1;

    for (int j = 1; j < COLUNAS; j++)
    {
        flag = 1;
        c = tabuleiro[0][j];
        for (int i = 0; i < LINHAS; i++)
        {
            if (tabuleiro[i][j] != c)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag) return 1;

    c = tabuleiro[0][0];

    flag = 1;

    for(int i = 1; i < LINHAS; i++)
    {
        if (tabuleiro[i][i] != c)
        {
            flag = 0;
            break;
        }
    }
    if (flag) return 1;

    flag = 1;
    for (int i = 1; i < LINHAS; i++)
    {
        if (tabuleiro[i][LINHAS - 1 - i] != c)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    int vencedor = 0;
    int escolha = 0;
    int linha = 0;
    int coluna = 0;
    int i;

    char tabuleiro[LINHAS][COLUNAS] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};

    for (i = 0; i < 9 && !vencedor; i++)
    {
        int jogador = i % 2 + 1;
        imprimeTabuleiro(tabuleiro);

        do
        {
            printf("\nJogador %d, introduza o numero do quadrado "
                   "onde quer colocar o seu %c ",
                   jogador, (jogador == 1) ? 'X' : 'O');
            scanf("%d", &escolha);

            linha = --escolha / 3;
            coluna = escolha % 3;
        } while (escolha < 0 || escolha > 9 || tabuleiro[linha][coluna] > '9');

        tabuleiro[linha][coluna] = (jogador == 1) ? 'X' : 'O';
        if (haVencedor(tabuleiro))
        {
            vencedor = jogador;
        }
    }

    imprimeTabuleiro(tabuleiro);

    if (!vencedor)
    {
        printf("Empate\n");
    }
    else
    {
        printf("O Jogador %d venceu\n", vencedor);
    }

    return 0;
}