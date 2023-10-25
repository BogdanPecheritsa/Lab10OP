#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int i = 1; i <= 6; i++) {
        for (int j = 0; j < (i % 2 == 0 ? i * i : i + 1); j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}