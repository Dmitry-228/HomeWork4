#include <stdio.h>

void toBinary(int num) {
    int binary[32];
    int i = 0;
    
    if(num < 0) {
        num = -num;
        binary[i++] = 1;
    } else {
        binary[i++] = 0;
    }
    
    while(num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }
    
    printf("Binary: ");
    if(binary[0] == 1) {
        printf("-");
    }
    for(int j = i - 1; j >= 1; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    toBinary(num);
    return 0;
}