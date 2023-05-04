#include <stdio.h>

int main() {
    int n, count = 0;
    printf("кол-во элементов: ");
    scanf("%d", &n);
    int arr[n];
    printf("Введите элементы массива через пробел: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}