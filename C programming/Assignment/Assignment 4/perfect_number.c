#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Perfect numbers between 1 and %d are:\n", n);
    for (int num = 1; num <= n; num++) {
        int sum = 0;

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num && num != 0) {
            printf("%d ", num);
        }
    }

    return 0;
}
