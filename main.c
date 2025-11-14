#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    int start = 1;
    int end = 1;
    int i = 1;

    while (1) {
        if (n >= start && n <= end) {
            printf("%d", i);
            break;
        }
        start = end + 1;
        end = end + (6 * i);
        i++;
    }


    return 0;
}
