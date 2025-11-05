#include <stdio.h>
#include <string.h>

int main(void) {

    char st[101];
    scanf("%s", st);

    int target = 97;
    int seq = -1;


    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < strlen(st); ++j) {
            if (st[j] == target) {
                seq = j;
                break;
            }
        }

        printf("%d ", seq);
        target++;
        seq = -1;
    }

    return 0;
}
