#include <stdio.h>

int main(void) {

    int a, b, c, d, e, f;
    int x = -999, y = -999;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);


    for (int i = x; i < 1000; ++i) {
        for (int j = y; j < 1000; ++j) {
            if (a * i + b * j == c && d * i + e * j == f) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }


    return 0;
}
