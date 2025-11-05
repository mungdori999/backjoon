#include <stdio.h>
#include <string.h>

int main(void) {

    char st[1000];
    int num = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; ++i) {
        scanf("%s", st);
        printf("%c%c\n", st[0], st[strlen(st) - 1]);

        memset(st, 0, sizeof(st));

    }

    return 0;
}
