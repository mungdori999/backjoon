#include <stdio.h>
#include <tgmath.h>

int main(void) {

    char a[4];
    char b[4];

    scanf("%3s %3s", a, b);

    int sumA = 0;
    int sumB = 0;

    for (int i = 2; i >= 0; --i) {
        int sq = pow(10, i);
        sumA += sq * (a[i] - '0');
        sumB += sq * (b[i] - '0');
    }
    printf("%d", sumA > sumB ? sumA : sumB);

    return 0;
}
