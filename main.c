#include <stdio.h>
#include <string.h>
#include <tgmath.h>

int main(void) {

    int decimal, radix;

    scanf("%d %d", &decimal, &radix);

    int quotient = decimal;

    int remainder[200] = {0,};
    int n = 0;

    if (quotient == 0) {
        printf("%d", 0);
        return 0;
    }
    while (quotient != 0) {
        remainder[n] = quotient % radix;
        quotient = quotient / radix;
        n++;
    }

    char output[200];

    for (int i = 0; i < n; ++i) {
        if (remainder[n - i - 1] >= 10) output[i] = 'A' + (remainder[n - i - 1] - 10);
        else output[i] = remainder[n - i - 1] + '0';

        printf("%c", output[i]);
    }

    return 0;
}
