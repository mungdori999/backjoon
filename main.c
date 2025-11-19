#include <stdio.h>

int main(void) {
    int A;

    while (1) {
        int arr[100000] = {0,};
        int count = 0;
        int sum = 0;
        scanf("%d", &A);

        if (A == -1)break;

        for (int i = 1; i < A; ++i) {
            if (A % i == 0) {
                arr[count] = i;
                count++;
                sum += i;
            }
        }

        if (sum == A) {
            printf("%d =", A);
            for (int i = 0; i < count; ++i) {
                if (i == count - 1) {
                    printf(" %d", arr[i]);
                } else {
                    printf(" %d +", arr[i]);
                }

            }
            printf("\n");
        } else {
            printf("%d is NOT perfect.\n", A);
        }

    }

    return 0;
}
