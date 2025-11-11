#include <stdio.h>

int main(void) {

    int cross[10][10];

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            scanf("%d", &cross[i][j]);
        }
    }
    int max = 0;
    int x, y;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            if (cross[i][j] >= max) {
                max = cross[i][j];
                x = i;
                y = j;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d", x, y);


    return 0;
}
