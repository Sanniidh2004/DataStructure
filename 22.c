//Level-2 to WAP in C for addition, subtraction, multiplication, division using switch case//

#include<stdio.h>

int main() {
    int choice, num1, num2, sum, diff, mult, div;

    while (1) {
        
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
      
        printf("Enter your choice : ");
        scanf("%d", &choice);


        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

       
        switch (choice) {
            case 1:
                sum = num1 + num2;
                printf("Result: %d + %d = %d\n", num1, num2, sum);
                break;
            case 2:
                diff = num1 - num2;
                printf("Result: %d - %d = %d\n", num1, num2, diff);
                break;
            case 3:
                mult = num1 * num2;
                printf("Result: %d * %d = %d\n", num1, num2, mult);
                break;
            case 4:
                    div = num1 / num2;
                    printf("Result: %d / %d = %d\n", num1, num2, div);
                break;
            default:
                printf("OPTION NOT AVAILABLE.\n");
        }
    }

    return 0;
}
