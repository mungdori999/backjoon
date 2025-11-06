#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000001];
    fgets(sentence, sizeof(sentence), stdin);

    int count = 0;
    int len = strlen(sentence);

    for (int i = 0; i < len; i++) {
        if (sentence[i] != ' ' && (i == 0 || sentence[i - 1] == ' ') && sentence[i] != '\n') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
