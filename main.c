#include <stdio.h>
#include <string.h>

int main(void) {

    float sumScore = 0;
    float sumPoint = 0;
    for (int i = 0; i < 20; ++i) {
        char sub[51];
        float point;
        char rating[3];

        scanf("%s %f %s", sub, &point, rating);

        if (rating[0] == 'P') continue;

        sumPoint += point;

        if (rating[0] == 'A') {
            if (rating[1] == '+') {
                sumScore += (4.5f * point);

            } else {
                sumScore += (4.0f * point);
            }
        } else if (rating[0] == 'B') {
            if (rating[1] == '+') {
                sumScore += (3.5f * point);

            } else {
                sumScore += (3.0f * point);
            }
        } else if (rating[0] == 'C') {
            if (rating[1] == '+') {
                sumScore += (2.5f * point);

            } else {
                sumScore += (2.0f * point);
            }
        } else if (rating[0] == 'D') {
            if (rating[1] == '+') {
                sumScore += (1.5f * point);

            } else {
                sumScore += (1.0f * point);
            }
        } else {
            sumScore += 0.0f;
        }
    }

    printf("%f", sumScore / sumPoint);
    return 0;
}
