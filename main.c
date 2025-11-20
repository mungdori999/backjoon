#include <stdio.h>

int main(void) {
    int N;

    scanf("%d", &N);

    while (N > 1) {

        int num = 2;
        while (1) {
            if (N % num == 0) {
                N /= num;
                printf("%d\n", num);
                break;
            }
            num++;
        }

    }
    return 0;
}
