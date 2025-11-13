#include <stdio.h>
#include <string.h>

int main(void) {

    int n;
    int coordinate[100][100];


    memset(coordinate, 0, sizeof(coordinate));

    scanf("%d", &n);
    int area = 0;

    for (int i = 0; i < n; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);

        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                coordinate[x + j][y + k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            if (coordinate[i][j] == 1) area++;
        }
    }

    printf("%d",area);
    return 0;
}
