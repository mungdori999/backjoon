#include <stdio.h>

int arr[10001];  // 전역 -> 자동 초기화

int main(void) {
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int tmp;
        scanf("%d", &tmp);
        arr[tmp]++;
    }

    for (int i = 1; i <= 10000; ++i) {
        while (arr[i]--) printf("%d\n", i);
    }
    return 0;
}
