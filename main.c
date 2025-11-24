#include <stdio.h>
#include <tgmath.h>

int main(void) {

    int N;

    scanf("%d", &N);

    int constructor = 1;
    int M;

    while (1) {

        if(constructor>=N) {
            printf("0");
            break;
        }
        M = constructor;

        int n = constructor;

        while (n > 0) {
            M += n % 10;
            n = n / 10;
        }

        if (N == M) {
            printf("%d", constructor);
            break;
        }
        constructor++;

    }

    return 0;
}
