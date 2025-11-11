#include <stdio.h>
#include <string.h>

int main(void) {

    int n;
    scanf("%d", &n);

    int count = 0;

    for (int i = 0; i < n; ++i) {
        char word[101];
        scanf("%s", word);

        int len = strlen(word);

        int flag = 0;
        int check = 1;

        for (int j = 0; j < len; ++j) {
            flag = 0;
            for (int k = j + 1; k < len; ++k) {
                if (flag == 1) {
                    if (word[j] == word[k]) {
                        check = 0;
                        break;
                    }
                } else {
                    if (word[j] != word[k]) {
                        flag = 1;
                    }
                }
            }

            if (check == 0) {
                break;
            }

        }
        if (check == 1) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
