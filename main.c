#include <stdio.h>

int main(void) {
    int A;
    int count = 0;

    scanf("%d", &A);
    for (int i = 0; i < A; ++i) {
        int number = 0;

        scanf("%d", &number);

        if (number == 1) continue;

        int prime = 0;
        for (int j = 1; j <= number; ++j) {
            if (number % j == 0) prime++;
        }
        if (prime == 2) count++;
    }
    printf("%d", count);

    return 0;
}
