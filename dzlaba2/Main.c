#include <stdio.h>
#include <locale.h>
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int i;
    printf("������� i: ");
    scanf("%d", &i);

    if (i == 0) {
        printf("������� �� ���� ����������.\n");
    }
    else {
        float res = 1.0f / i;
        printf("1/%d = %f\n", i, res);
    }
    return 0;
}
