#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    int right = 0;
    int i = 1;

    while (1) {
        int num = (i * (i + 1)) / 2;

        if (n >= num - i && n <= num) {
            int diffTop = num - n;
            int diffBottom = n - (num - i + 1);

            if (right == 1) {
                printf("%d/%d",i-diffTop , i - diffBottom);
            } else {
                printf("%d/%d", i - diffBottom, i - diffTop);
            }
            break;
        }
        i++;
        right = right == 1 ? 0 : 1;
    }


    return 0;
}
