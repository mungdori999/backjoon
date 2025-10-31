#include <stdio.h>
#include <string.h>

int main(void) {

    int n, x = 0;
    scanf("%d %d", &n, &x);

    int arr[n];
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);

    }
    int target[n];
    memset(target, 0, sizeof(target));

    for (int i = 0; i < n; ++i) {
        if (arr[i] < x) printf("%d ", arr[i]);
    }


    return 0;
}
