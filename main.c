#include <stdio.h>
#include <tgmath.h>

int main(void) {
    int A, B, V;

    scanf("%d %d %d", &A, &B, &V);

    double days;
    days = ((double)(V - A) / (double)(A - B)) + 1;

    int answer;
    answer = ceil(days);

    printf("%d", answer);
    return 0;
}
