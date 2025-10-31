#include <stdio.h>

int main(void) {

    int max = 0;
    int line = 0;

    for (int i = 0; i < 9; ++i) {
        int num = 0;
        scanf("%d", &num);

        if (max <= num) {
            max = num;
            line = i+1;
        }
    }

    printf("%d\n%d", max,line);

    return 0;
}
