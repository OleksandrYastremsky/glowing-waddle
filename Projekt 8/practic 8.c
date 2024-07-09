#include <stdio.h>
#include <string.h>

#define MAX_LEN 14

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    char word[MAX_LEN + 1];
    
    printf("Введіть слово: ");
    scanf("%s", word);
    
    int length = strlen(word);
    if (length > MAX_LEN) {
        printf("Довжина слова не повинна перевищувати 14 символів.\n");
        return 1;
    }

    int freq[256] = {0};

    for (int i = 0; i < length; i++) {
        freq[(int)word[i]]++;
    }

    long long total_anagrams = factorial(length);

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            total_anagrams /= factorial(freq[i]);
        }
    }

    printf("Кількість можливих анаграм: %lld\n", total_anagrams);

    return 0;
}
