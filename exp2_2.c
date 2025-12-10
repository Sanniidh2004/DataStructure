#include <stdio.h>

void primeFactors(int n) {
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 2)
        printf("%d", n);
}

int main() {
    int n;
    printf("\nSannidhi Deb\n  2330044\n\n");
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    primeFactors(n);
    printf("\n");
    return 0;
}
