#include <stdio.h>

int main(void) {

    int x, n = 0;

    scanf("%d", &x);

    scanf("%d", &n);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int a, b = 0;

        scanf("%d %d", &a, &b);

        sum += (a * b);

    }

    printf("%s", x == sum?  "Yes": "No");


    return 0;
}
