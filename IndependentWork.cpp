#include <stdio.h>
#include <Windows.h>

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, number, maxNumber, maxSum = 0;

    printf("¬вед≥ть к≥льк≥сть чисел: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("¬вед≥ть число %d: ", i);
        scanf_s("%d", &number);
        int currentSum = sumOfDigits(number);

        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxNumber = number;
        }
    }

    printf("„исло з найб≥льшою сумою цифр: %d\n", maxNumber);
    printf("—ума його цифр: %d\n", maxSum);

    return 0;
}