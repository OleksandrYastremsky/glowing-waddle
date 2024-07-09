#include <stdio.h>

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    
    if (n <= 1 || n >= 150) {
        printf("n повинно бути в межах від 2 до 149.\n");
        return 1;
    }

    int count = 0;
    
    // Перевірка всіх можливих значень m
    for (int m = 1; m < n; m++) {
        if ((n / m) == (n % m)) {
            count++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}
