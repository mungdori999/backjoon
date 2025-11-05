#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    char st[101];
    scanf("%s", st);

    int sum = 0;
    for (int i = 0; i < num; ++i) {
        sum += st[i] - '0';
    }

    printf("%d", sum);
    return 0;
}
