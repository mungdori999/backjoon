#include <stdio.h>
#include <string.h>
#include <tgmath.h>

int main(void) {
    int n, pay;
    int quarter, dime, nickel, penny;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &pay);

        quarter = pay / 25;
        pay -= (quarter * 25);

        dime = pay / 10;
        pay -= (dime * 10);

        nickel = pay / 5;
        pay -= (nickel * 5);

        penny = pay / 1;
        pay -= (penny);
        printf("%d %d %d %d\n", quarter, dime, nickel, penny);
    }

    return 0;
}
