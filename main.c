#include <stdio.h>
#include <string.h>


int main(void) {

    int n, m;
    scanf("%d %d", &n, &m);
    int basket[n + 1];

    for (int i = 1; i <= n; ++i) {
        basket[i] = i;
    }

    for (int i = 1; i <= m; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);

        for (int j = 0; j < ((b - a + 1) / 2); ++j) {
            int temp = basket[a + j];
            basket[a + j] = basket[b - j];
            basket[b - j] = temp;
        }
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", basket[i]);
    }

    return 0;
}
