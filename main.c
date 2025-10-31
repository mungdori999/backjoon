#include <stdio.h>
#include <string.h>


int main(void) {

    int student[31];

    memset(student, 0, sizeof(student));

    for (int i = 1; i <= 28; ++i) {
        int x = 0;
        scanf("%d", &x);
        student[x] = 1;
    }

    for (int i = 1; i <= 30; ++i) {
        if (student[i] == 0) {
            printf("%d\n", i);
        }

    }
    return 0;
}
