#include <stdio.h>
#define MOD 12345

int main() {
    int n;
    printf("Введіть довжину послідовностей n: ");
    scanf("%d", &n);
    
    if (n <= 1 || n >= 10000) {
        printf("n повинно бути в межах від 2 до 9999.\n");
        return 1;
    }

    int dp[n+1];

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;
    dp[3] = 7;
    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }

    printf("Кількість шуканих послідовностей: %d\n", dp[n]);

    return 0;
}
