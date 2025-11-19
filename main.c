#include <stdio.h>

int main(void) {
    int A, B;
    int prime[10000] = {0,};
    int count = 0;
    int sum = 0;
    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; ++i) {
        int j;
        for (j = 2; j < i; ++j) {
            if (i % j == 0) break;
        }

        if (j == i) {
            prime[count] = i;
            count++;
            sum += i;
        }
    }

    if (prime[0] == 0) printf("-1");
    else {
        printf("%d\n%d", sum, prime[0]);
    }

    return 0;
}
