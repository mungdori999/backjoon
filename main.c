#include <stdio.h>

int main(void) {

    while (1) {
        int a, b, c = 0;
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0) break;

        int sum = a + b + c;
        int max = 0;

        if (a >= b) {
            if (a >= c) max = a;
            else max = c;
        } else {
            if (b >= c) max = b;
            else max = c;
        }

        if ((sum - max) > max) {
            if (a == b && b == c && a == c) printf("Equilateral\n");
            else if(a == b || b == c || a == c) printf("Isosceles\n");
            else printf("Scalene\n");
        } else {
            printf("Invalid\n");
        }
    }
    return 0;
}
