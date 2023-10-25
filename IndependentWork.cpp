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

    printf("������ ������� �����: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("������ ����� %d: ", i);
        scanf_s("%d", &number);
        int currentSum = sumOfDigits(number);

        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxNumber = number;
        }
    }

    printf("����� � ��������� ����� ����: %d\n", maxNumber);
    printf("���� ���� ����: %d\n", maxSum);

    return 0;
}