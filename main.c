#include <stdio.h>

int main(void) {

    long n;
    scanf("%ld", &n);

    printf("%ld\n", ((n - 2) * (n - 1) * (n)) / 6);
    printf("3");
    return 0;
}
