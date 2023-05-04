#include <stdio.h>

int main() {
    float n, sum, count;
    sum = 0;
    count = 0;
    do {
        scanf("%f", &n);
        sum += n;
        count++;
    } while (n != 0);
    printf("%f\n", sum / (count - 1));
    return 0;
}
