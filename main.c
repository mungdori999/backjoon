#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int count = -1;

    for (int i = 0; i < (2 * n) - 1; ++i) {
        for (int j = 0; j < (2 * n) - 1; ++j) {

            if (j == ((n - 1) - i)) {
                printf("%c", '*');
                count++;
                break;
            } else if (j == (i - (n - 1))) {
                printf("%c", '*');
                count--;
                break;
            } else {
                printf(" ");
            }
        }
        for (int j = 0; j < 2 * count; ++j) {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}
