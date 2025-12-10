//Level-5  to WAP in C for addition, subtraction, multiplication, division using switch case with arguments//

#include <stdio.h>

int a,b;

sum(a,b);
diff(a,b);
mult(a,b);
div(a,b);


int sum( a, b) {
    printf("Addition: %d + %d = %d\n", a, b, a + b);
}
int diff(a,b) {
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
}
int mult(a,b) {
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
}
int div(a,b) {
    printf("Division: %d / %d = %d\n", a, b, a / b);
}

int main(){
int num1, num2, choice;

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
               sum(num1, num2);
                break;
            case 2:
               
                diff(num1 ,num2);
                break;
            case 3:
               
               mult(num1 ,num2);
                break;
            case 4:
                     div(num1 ,num2);
                break;
            default:
                printf("OPTION NOT AVAILABLE.\n");
        }
    }

return 0;
}
