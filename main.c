#include <stdio.h>
#include <string.h>

int main(void) {
    int time[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
    char alphabet[16];

    scanf("%s", alphabet);
    int sum = 0;

    for (int i = 0; i < strlen(alphabet); ++i) {
        int num = alphabet[i] - 'A';
        sum += time[num];

    }
    printf("%d",sum);


    return 0;
}
