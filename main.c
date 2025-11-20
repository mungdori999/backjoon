#include <stdio.h>

int main(void) {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int minX, minY;

    minX = x <= w - x ? x : w - x;
    minY = y <= h - y ? y : h - y;

    printf("%d", minX >= minY ? minY : minX);

    return 0;
}
