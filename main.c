#include <stdio.h>
#include <string.h>

int main(void) {

    int n = 0;
    scanf("%d", &n);

    long arr[n];
    memset(arr, 0, sizeof(arr));



    for (int i = 0; i < n; ++i) {
        scanf("%ld", &arr[i]);
    }

    long max = arr[0];
    long min = arr[0];

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= max) max = arr[i];
        if (arr[i] <= min) min = arr[i];
    }

    printf("%ld %ld", min, max);
    return 0;
}
