#include <stdio.h>
#include <string.h>

int main(void) {

    char st[100];
    int count = 0;

    scanf("%s", st);
    for (int i = 0; i < strlen(st); ++i) {
        if (st[i] == '\0') break;

        count++;
    }
    printf("%d", count);

    return 0;
}
