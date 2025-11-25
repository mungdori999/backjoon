#include <stdio.h>

int fiveFirst(int N);

int threeFirst(int N);

int main(void) {

    int N;
    scanf("%d", &N);


    int i = fiveFirst(N);
    int j = threeFirst(N);

    if (i == -1) {
        if (j == -1) printf("-1");
        else printf("%d", j);
    } else {
        if (j == -1) printf("%d", i);
        else {
            printf("%d", i >= j ? j : i);
        }
    }

    return 0;
}

int fiveFirst(int N) {

    int min = 10000;
    int i = 0;

    while ((N - (5 * i)) >= 0) {
        int five, three;
        int temp = N;
        five = i;
        temp = temp - (5 * i);

        three = temp / 3;

        temp %= 3;
        if (temp == 0) {
            i++;
            min = min >= five + three ? five + three : min;
        } else {
            i++;
        }
    }
    if (min == 10000) return -1;
    else return min;
}


int threeFirst(int N) {

    int min = 10000;
    int i = 0;

    while ((N - (3 * i)) >= 0) {
        int five, three;
        int temp = N;

        three = i;
        temp = temp - (3 * i);

        five = temp / 5;

        temp %= 5;
        if (temp == 0) {
            i++;
            min = min >= five + three ? five + three : min;
        } else {
            i++;

        }
    }
    if (min == 10000) return -1;
    else return min;
}