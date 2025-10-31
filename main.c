#include <stdio.h>
#include <string.h>

int main(void) {

    int n = 0;
    scanf("%d", &n);

    int arr[n];

    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n; ++i) {
        int a = 0;
        scanf("%d ", &a);
        arr[i] = a;
    }
    int target, count = 0;

    scanf("%d", &target);

    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) count++;
    }

    printf("%d",count);


    return 0;
}
