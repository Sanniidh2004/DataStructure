#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    int n;
    printf("\nSannidhi Deb\n  2330044\n\n");
    printf("Enter a positive integer\n: ");
    scanf("%d", &n);
    printf("\nFactorial of %d is %d\n", n, factorial(n));
    return 0;
}
