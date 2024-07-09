#include <stdio.h>
#include <limits.h>

int min_steps(int x, int y) {
    int dp[y + 1];
    
    for (int i = 0; i <= y; i++) {
        dp[i] = INT_MAX;
    }
    
    dp[x] = 0;
    
    for (int i = x; i <= y; i++) {
        if (dp[i] != INT_MAX) {
            if (i + 1 <= y) {
                dp[i + 1] = (dp[i + 1] > dp[i] + 1) ? dp[i] + 1 : dp[i + 1];
            }
            if (i - 1 >= x) {
                dp[i - 1] = (dp[i - 1] > dp[i] + 1) ? dp[i] + 1 : dp[i - 1];
            }
            if (i * 2 <= y) {
                dp[i * 2] = (dp[i * 2] > dp[i] + 1) ? dp[i] + 1 : dp[i * 2];
            }
        }
    }
    
    return dp[y];
}

int main() {
    int x, y;
    
    printf("Введіть значення x та y через пробіл (0 <= x <= y < 2^31): ");
    scanf("%d %d", &x, &y);
    
    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків для досягнення %d з %d: %d\n", y, x, result);
    
    return 0;
}
