#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", &n);

    float avg = 0;
    float max = 0;
    float sub[n];

    for (int i = 0; i < n; ++i) {
        scanf("%f", &sub[i]);
        if (sub[i] >= max) max = sub[i];
    }

    for (int i = 0; i < n; ++i) {
        sub[i] = sub[i] / max * 100;
        avg += sub[i];
    }

    printf("%f", avg / n);


    return 0;
}
