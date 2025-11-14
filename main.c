#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);


    int dot = 3;
    for (int i = 1; i < n; ++i) {
        dot = dot * 2 - 1;
    }

    printf("%d", dot * dot);

    return 0;
}
