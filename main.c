#include <stdio.h>

int main(void) {

    int repeat = 0;

    scanf("%d", &repeat);

    for (int i = 0; i < repeat; i++) {
        int a, b = 0;

        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
