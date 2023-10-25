#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i, j;
    double result = 0.0;

    for (i = 1; i <= 50; i++) {
        for (j = 1; j <= 10; j++) {
            result += 1.0 / (i + j);
        }
    }

    printf("Результат: %lf\n", result);
    return 0;
}