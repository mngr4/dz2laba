#include <stdio.h>
#include <locale.h>
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int i;
    printf("Введите i: ");
    scanf("%d", &i);

    if (i == 0) {
        printf("Деление на ноль невозможно.\n");
    }
    else {
        float res = 1.0f / i;
        printf("1/%d = %f\n", i, res);
    }
    return 0;
}
