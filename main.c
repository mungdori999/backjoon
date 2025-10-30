#include <stdio.h>

int main(void) {
    int a, b, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int scoreA = a - b;
    int scoreB = c - b;
    int scoreC = a - c;

    int flag = scoreA * scoreB * scoreC;

    int final = 0;

    if (flag == 0) {
        if (scoreA == 0 && scoreB == 0 && scoreC == 0) {
            final = a;
            printf("%d", 10000 + (final * 1000));
        } else {

            if (a == b) {
                final = a;
            } else if (b == c) {
                final = b;
            } else {
                final = c;
            }
            printf("%d", 1000 + (final * 100));
        }


    } else {
        int final = a;
        if (b > final) final = b;
        if (c > final) final = c;

        printf("%d",  (final * 100));
    }


    return 0;
}
