#include <stdio.h>


int main(void) {

    int arr[5] = {0,};
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n%d", sum / 5, arr[2]);

    return 0;
}
