#include <stdio.h>
#include <string.h>

int main(void) {

    char arr[5][16];
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 15; ++j) {
            char ch = getchar();
            if (ch == '\n' || ch == EOF) break;
            arr[i][j] = ch;

            if (j == 14) {
                while ((ch = getchar()) != '\n' && ch != EOF);
                break;
            }
        }
    }

    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 5; ++j) {
            if(arr[j][i]==0) continue;
            printf("%c", arr[j][i]);
        }
    }

    return 0;
}
