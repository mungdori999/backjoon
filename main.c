#include <stdio.h>
#include <string.h>


int main(void) {

    char input[10];
    memset(input, '0', sizeof(input));
    int arr[10] = {0};
    char ch;
    int idx = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        input[idx] = ch;
        idx++;
    }
    for (int i = 0; i < idx; ++i) {
        int tmp = input[i] - '0';
        arr[tmp]++;
    }
    for (int i = 9; i >= 0; --i) {
        while (arr[i]) {
            printf("%d", i);
            arr[i]--;
        }
    }
    return 0;
}
