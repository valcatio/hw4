#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "RUS");
    int A, B;
    printf("Номер команды A: ");
    scanf_s("%d", &A);

    printf("Номер команды B: ");
    scanf_s("%d", &B);

    if (A % 2 != B % 2) {
        printf("Право первого хода получено\n");
    }
    else {
        printf("Право первого хода не получено\n");
    }
}