#include <stdio.h>

int main(void) {

    int n = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int a, b = 0;
        scanf("%d %d", &a, &b);

        printf("Case #%d: %d\n", i, a + b);
    }


    return 0;
}
