//Level-3 to WAP in C for addition, subtraction, multiplication, division using void datatype//

#include <stdio.h>

int a,b;

void add() {
    printf("Addition: %d + %d = %d\n", a, b, a + b);
}
void subtract() {
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
}
void multiply() {
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
}
void divide() {
    printf("Division: %d / %d = %d\n", a, b, a / b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    add(num1, num2);
    subtract(num1, num2);
    multiply(num1, num2);
    divide(num1, num2);

    return 0;
}

