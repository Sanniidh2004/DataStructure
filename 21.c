//Level-1 to WAP in C for addition, subtraction, multiplication, division//

#include <stdio.h>

int main() {
    int num1, num2, sum, diff, mult, div;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("Sum: %d\n", sum);

    diff= num1 - num2;
    printf("Difference: %d\n", diff);

    mult = num1 * num2;
    printf("Product: %d\n", mult);

    div = num1 / num2;
    printf("Division: %d\n", div);
    
   return 0;
}
