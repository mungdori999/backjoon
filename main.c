#include <stdio.h>
#include <string.h>


int main(void) {

    int arr[10] = {0,};

    for (int i = 0; i < 10; ++i) {
        int num;
        scanf("%d", &num);

        arr[i] = num % 42;
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (arr[j] >= arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int count = 1;

    for (int i = 0; i < 9; ++i) {
        if (arr[i] != arr[i + 1]) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
