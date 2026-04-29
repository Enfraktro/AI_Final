#include <stdio.h>

int main() {
    printf("--- ЗАДАНИЕ 1 ---\n");
    printf("Условие: Сумиране на елементите на двумерен масив, намиращи се върху десния диагонал.\n");
    printf("Никола Цонев Безсолнаков\n");
    printf("Фак. номер: 471225051\n");

    int n;
    printf("Въведете размера на квадратната матрица N: ");
    scanf("%d", &n);

    int matrix[100][100];
    
    printf("\nВъведете елементите на матрицата:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Елемент [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    
    printf("\nЕлементи върху десния диагонал: ");
    for(int i = 0; i < n; i++) {
        int element = matrix[i][n - 1 - i];
        printf("%d ", element);
        sum += element;
    }

    printf("\nСума от тези елементи: %d\n", sum);

    return 0;
}