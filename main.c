#include <stdio.h>
#include <string.h>


int main(void) {

    int N;
    int arr[2000002];
    memset(arr, 0, sizeof(arr));

    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int temp;
        scanf("%d", &temp);
        arr[temp + 1000000] = 1;

    }

    for (int i = 0; i < 2000002; ++i) {
        if (arr[i]) printf("%d\n", i-1000000);
    }


    return 0;
}
