#include <stdio.h>

int main(void) {

    int n = 0;

    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
