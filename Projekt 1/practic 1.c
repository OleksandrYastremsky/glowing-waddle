#include <stdio.h>

double time_to_eat_cake(int t1, int t2, int t3) {
    double rate1 = 1.0 / t1;
    double rate2 = 1.0 / t2;
    double rate3 = 1.0 / t3;
    
    double combined_rate = rate1 + rate2 + rate3;

    double total_time = 1.0 / combined_rate;
    
    return total_time;
}

int main() {
    int t1, t2, t3;

    printf("Введіть час t1, t2, t3 через пробіл: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    double result = time_to_eat_cake(t1, t2, t3);

    printf("Гості разом можуть з'їсти пиріг за: %.2f годин\n", result);
    
    return 0;
}
