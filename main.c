#include <stdio.h>

int main(void) {
    int a, b = 0;
    scanf("%d %d", &a, &b);

    b = b - 45;

    if (b < 0) {
        a--;
        if (a < 0) {
            a = 24 + a;
        }
        b = 60 + b;
    }

    printf("%d %d", a, b);

    return 0;
}
