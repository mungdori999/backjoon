#include <stdio.h>

int main(void) {
    int piece[6] ={1,1,2,2,2,8};

    for (int i = 0; i < 6; ++i) {
        int find;
        scanf("%d",&find);

        printf("%d ",piece[i]-find);
    }

    return 0;
}
