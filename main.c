#include <stdio.h>

int main(void) {

    char st[1000];
    int num = 0;

    scanf("%s", st);
    scanf("%d", &num);

    printf("%c", st[num-1]);




    return 0;
}
