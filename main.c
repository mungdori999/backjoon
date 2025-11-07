#include <stdio.h>
#include <string.h>

int main(void) {
    char word[101];
    int pellin = 1;

    scanf("%s", word);

    for (int i = 0; i < strlen(word) / 2; ++i) {
        if (word[i] != word[strlen(word) - 1 - i]) {
            pellin = 0;
            break;
        } else {
            pellin = 1;
        }
    }
    printf("%d", pellin);

    return 0;
}
