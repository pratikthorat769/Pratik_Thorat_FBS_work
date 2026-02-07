#include <stdio.h>

int main() {
    int num = 121;   
    int first, middle, last;

    if (num >= 100 && num <= 999) {
        first = num / 100;
        middle = (num / 10) % 10;
        last = num % 10;

        if (first == last) {
            printf("%d is a palindrome number", num);
        } else {
            printf("%d is not a palindrome number", num);
        }
    } else {
        printf("Not a 3-digit number");
    }

    return 0;
}
