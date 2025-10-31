#include <stdio.h>

int main(void) {

    int a = 0;

    scanf("%d", &a);

    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    return 0;
}
