#include <stdio.h>

int main(void) {
    int A, B;

    scanf("%d %d", &A, &B);

    int count = 0;

    for (int i = 1; i <= A; ++i) {
        if (A % i == 0) {
            count++;
            if (count == B) {
                printf("%d", i);
                return 0;
            }

        }

    }

    printf("0");

    return 0;
}
