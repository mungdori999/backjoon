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

    int num[2];
    int counter = 0;
    for (int i = 1; i <= 30; ++i) {
        if (student[i] == 0) {
            num[counter] = i;
            counter++;
        }

    }
    if (num[0] > num[1]) { printf("%d\n%d", num[1], num[0]); }
    else {
        printf("%d\n%d", num[0], num[1]);
    }
    return 0;
}
