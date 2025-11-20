#include <stdio.h>

int main(void) {

    int height[3] = {0,};
    scanf("%d %d %d", &height[0], &height[1], &height[2]);

    int sum = height[0] + height[1] + height[2];
    int max = 0;
    int num = 0;

    for (int i = 0; i < 3; ++i) {
        if (height[i] >= max){
            max = height[i];
            num = i;}

    }

    if ((sum - max) <= max) {
        height[num] = (sum - max - 1);
        printf("%d", height[0] + height[1] + height[2]);
    } else {
        printf("%d", sum);
    }
    return 0;
}
