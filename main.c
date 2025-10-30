#include <stdio.h>

int main(void) {
    int a, b = 0;
    int term = 0;
    scanf("%d %d", &a, &b);
    scanf("%d", &term);

    b = b + term;
    int limit = b / 60;

    if (limit > 0) {
        a += limit;
        b -= (limit * 60);
        if (a >= 24) {
            a -= 24;
        }
    }
    printf("%d %d", a, b);
    return 0;
}
