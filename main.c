#include <stdio.h>
#include <string.h>

int main(void) {

    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n];
    memset(arr,0,sizeof(arr));

    for (int r = 0; r < m; ++r) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);

        for (int l = i - 1; l < j; ++l) {
            arr[l] = k;
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }


    return 0;
}
