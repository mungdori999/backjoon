#include <stdio.h>
#include <string.h>

int main(void) {

    char sentence[101];

    while (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        printf("%s", sentence);
    }

    return 0;
}
