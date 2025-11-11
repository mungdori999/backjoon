#include <stdio.h>

int main(void) {

    int n, m;
    scanf("%d %d", &n, &m);

    int arr1[n][m];
    int arr2[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int a;
            scanf("%d", &a);
            arr1[i][j] = a;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int a;
            scanf("%d", &a);
            arr2[i][j] = a;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }


    return 0;
}
