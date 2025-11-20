#include <stdio.h>

int main(void) {

    int angle[3] = {0,};
    int sum = 0;

    for (int i = 0; i < 3; ++i) {
        scanf("%d", &angle[i]);
        sum += angle[i];
    }

    if (sum == 180) {
        if (angle[0] == angle[1] && angle[1] == angle[2] && angle[0] == angle[2]) {
            printf("Equilateral");
        } else if(angle[0] == angle[1] || angle[1] == angle[2] || angle[0] == angle[2]) {
            printf("Isosceles");
        } else {
            printf("Scalene");
        }
    } else{
        printf("Error");
    }

    return 0;
}
