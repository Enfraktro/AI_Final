#include <stdio.h>

// Помощна функция за изчисляване на факториел (n!)
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Подпрограма (функция) за изчисляване на редицата
double calculateSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        // Добавяме i! / i към общата сума
        sum += (double)factorial(i) / i; 
    }
    return sum;
}

int main() {
    printf("--- ЗАДАНИЕ 2 ---\n");
    printf("Изчисляване на редицата: 1!/1 + 2!/2 + 3!/3 + ... + n!/n\n\n");

    // Дефиниране на 3 различни стойности за аргументите
    int arg1 = 3;
    int arg2 = 5;
    int arg3 = 7;

    // Извикване на подпрограмата три пъти
    double result1 = calculateSeries(arg1);
    double result2 = calculateSeries(arg2);
    double result3 = calculateSeries(arg3);

    // Отпечатване на резултатите
    printf("При n = %d, сумата на редицата е: %.0f\n", arg1, result1);
    printf("При n = %d, сумата на редицата е: %.0f\n", arg2, result2);
    printf("При n = %d, сумата на редицата е: %.0f\n", arg3, result3);

    return 0;
}