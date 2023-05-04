#include <stdio.h>

int main() {
    int month, year, days;
    printf("Введите номер месяца и год (через пробел): ");
    scanf("%d %d", &month, &year);
    if (month >= 13){
        printf("Некорректный номер месяца\n");
    }
    switch (month) {
        case 1:
            days = 31;
            break;
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
    }

    printf("%d\n", days);
    return 0;
}
