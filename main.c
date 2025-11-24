#include <stdio.h>

int checkChess(const char board[51][51], int i, int j, char start);

int main(void) {

    int N, M;
    char board[51][51];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf(" %c", &board[i][j]);
        }
    }

    int min = 64;

    for (int i = 0; i <= N - 8; ++i) {
        for (int j = 0; j <= M - 8; ++j) {

            int a = checkChess(board, i, j, 'W');
            int b = checkChess(board, i, j, 'B');
            int count = (a < b ? a : b);

            if (min >= count) min = count;

        }
    }

    printf("%d", min);
    return 0;
}

int checkChess(const char board[51][51], int i, int j, char start) {

    int count = 0;
    char chess[8][8];

    chess[0][0] = start;

    for (int k = 0; k < 8; ++k) {
        for (int l = 0; l < 8; ++l) {
            if (k == 0 && l == 0) {
                chess[k][l] == board[i + k][j + l] ? count : count++;
                continue;
            }

            if (l == 0) {
                chess[k][l] = chess[k - 1][l] == 'B' ? 'W' : 'B';
                chess[k][l] == board[i + k][j + l] ? count : count++;

            } else {
                chess[k][l] = chess[k][l - 1] == 'B' ? 'W' : 'B';
                chess[k][l] == board[i + k][j + l] ? count : count++;
            }
        }
    }
    return count;
}
