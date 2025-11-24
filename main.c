#include <stdio.h>

int main(void) {

    int n, m;
    int cards[101];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &cards[i]);
    }

    int sum = 0;
    int diff = 100000;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                sum = cards[i] + cards[j] + cards[k];
                if ((m - sum) >= 0 && diff >= (m - sum)) {
                    diff = (m - sum);
                }
            }
        }
    }
    printf("%d", (m - diff));


    return 0;
}
