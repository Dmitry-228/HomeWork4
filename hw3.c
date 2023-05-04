#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[15];
    int length, i, upper_case = 0, lower_case = 0, digits = 0, other = 0;
    printf("Enter password: ");
    scanf("%s", password);
    length = strlen(password);
    if (length < 8 || length > 14) {
        printf("Либо длинный, либо короткий (8-14)\n");
        return 0;
    }
    for (i = 0; i < length; i++) {
        if (password[1] < 33 || password[1]> 126) {
            printf("Пароль не подошел, не попал в ASCII (33-126)\n"); 
        }

        if (isupper(password[i])) {
            upper_case = 1;
        } else if (islower(password[i])) {
            lower_case = 1;
        } else if (isdigit(password[i])) {
            digits = 1;
        } else {
            other = 1;
        }
    }

    if (upper_case + lower_case + digits + other < 3) {
        printf("В пароле должны быть: большие буквы, маленькие буквы, цифры\n");
        return 0;
    }
    printf("Пароль подходит\n");

    return 0;
}
