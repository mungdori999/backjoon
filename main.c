#include <stdio.h>

int main(void) {
    int x[1001] = {0,};
    int y[1001] = {0,};

    for (int i = 0; i < 3; ++i) {
        int coorX, coorY;
        scanf("%d %d", &coorX, &coorY);
        x[coorX]++;
        y[coorY]++;
    }
    for (int i = 1; i <= 1000; ++i) {
        if (x[i] == 1) {
            printf("%d ", i);
        }
    }
    for (int i = 1; i <= 1000; ++i) {
        if (y[i] == 1) {
            printf("%d", i);
        }
    }

    return 0;
}
