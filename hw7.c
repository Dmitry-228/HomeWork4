#include <stdio.h>

int main() {
    int n, num, zero_count = 0, plus_count = 0, minus_count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num == 0) {
            zero_count++;
        } else if (num > 0) {
            plus_count++;
        } else {
            minus_count++;
        }
    }
    printf("%d %d %d", zero_count, plus_count, minus_count);
    return 0;
}
