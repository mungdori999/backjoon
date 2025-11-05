#include <stdio.h>
#include <string.h>

int main(void) {

    int test = 0;
    scanf("%d", &test);

    for (int i = 0; i < test; ++i) {
        int a;
        char arr[20];
        scanf("%d %s", &a, arr);

        for (int j = 0; j < strlen(arr); ++j) {
            for (int k = 0; k < a; ++k) {
                printf("%c",arr[j]);
            }
        }
        printf("\n");
    }


    return 0;
}
