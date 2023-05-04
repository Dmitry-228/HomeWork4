#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int i;
    for (i = 1; i < n; i++) {
        printf("   ");
    }

    for (i = 1; i <= k; i++) {
        printf("%2d", i);
        if ((i + n - 1) % 7 == 0 || i == k) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    return 0;
}
