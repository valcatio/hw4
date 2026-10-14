#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "RUS");
    int A, B;
    printf("Номер команды A: ");
    scanf("%d", &A);

    printf("Номер команды B: ");
    scanf("%d", &B);

    int res = ((A % 2 == 0) ^ (B % 2 == 0));
    printf("Право первого хода получено (1 - да, 0 - нет): %d\n", res);
}
