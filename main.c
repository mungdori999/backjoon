#include <stdio.h>


int main(void) {

    int N, k;
    int arr[1001];

    scanf("%d %d", &N, &k);

    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d", arr[k-1]);

    return 0;
}
