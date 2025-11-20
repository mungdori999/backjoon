#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int maxX = -10000;
    int minX = 10000;

    int maxY = -10000;
    int minY = 10000;

    for (int i = 0; i < n; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);

        maxX = maxX <= x ? x : maxX;
        maxY = maxY <= y ? y : maxY;

        minX = minX >= x ? x : minX;
        minY = minY >= y ? y : minY;
    }

    printf("%d", (maxX - minX) * (maxY - minY));
    return 0;
}
