#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char word[1000001];
    int counts[26];
    memset(counts, 0, sizeof(counts));

    scanf("%s", word);

    int len = strlen(word);

    for (int i = 0; i < len; ++i) {
        char upperChar = toupper(word[i]);
        counts[upperChar - 'A']++;
    }
    int max = 0;
    int num = 0;

    for (int i = 0; i < 26; ++i) {
        if (counts[i] > max) {
            max = counts[i];
            num = i;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; ++i) {
        if (max == counts[i]) count++;
        if(count>1) break;
    }

    printf("%c", count > 1 ? '?' : num + 'A');

    return 0;
}
