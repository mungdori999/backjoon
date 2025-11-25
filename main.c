#include <stdio.h>

int main(void) {

    int N;
    scanf("%d", &N);

    int count = 0;
    int number = 1;

    while (1) {

        int temp = number;
        int checkTemp = 0;
        while (temp != 0) {
            if (temp % 10 == 6) checkTemp++;
            else checkTemp = 0;

            if (checkTemp == 3) {
                count++;
                break;
            }
            temp /= 10;
        }


        if (count == N) {
            printf("%d", number);
            break;
        }
        number++;
    }


    return 0;
}
