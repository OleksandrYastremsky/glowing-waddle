#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    
    printf("Введіть координати x1, y1, x2, y2 через пробіл: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    int dx = x2 - x1;
    int dy = y2 - y1;

    double length = sqrt(dx * dx + dy * dy);

    printf("Довжина вектора: %.2f\n", length);
    
    return 0;
}
