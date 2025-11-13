#include <stdio.h>
#include <string.h>
#include <tgmath.h>

int main(void) {

    char input[100];
    int radix;
    int decimal = 0;

    scanf("%s %d", input, &radix);

    int len = strlen(input);
    int digits = len - 1;
    for (int i = 0; i < len; ++i) {
        int num = 0;
        if ((int) input[i] >= 65) num = input[i] - 'A' + 10;
        else { num = input[i] - '0'; }

        decimal += (num * pow(radix,digits));
        digits--;
    }


    printf("%d", decimal);
    return 0;
}
