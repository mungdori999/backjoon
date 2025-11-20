#include <stdio.h>

int main(void) {

    int a1, a0, c, n0;
    float n = 0;

    scanf("%d %d\n%d\n%d", &a1, &a0, &c, &n0);
    int tmp = a1 - c;
    if (tmp >= 0) n = (float) a0 / (float) tmp;
    else n = (float) a0 / (float) (-tmp);

    if (c >= a1)printf("%d", n <= (float) n0 ? 1 : 0);
    else printf("0");

    return 0;
}
