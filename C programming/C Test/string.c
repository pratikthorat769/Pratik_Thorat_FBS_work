#include <stdio.h>

int main() {
    char str[100];
    char ch, symbol;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to replace: ");
    scanf(" %c", &ch);

    printf("Enter special symbol: ");
    scanf(" %c", &symbol);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            str[i] = symbol;
        }
    }

    printf("Updated string: %s", str);

    return 0;
}