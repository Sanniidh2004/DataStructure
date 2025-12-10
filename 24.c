//Level-4  to WAP in C for addition, subtraction, multiplication, division using switch case with no arguments//

#include <stdio.h>

int a,b;

void sum();
void diff();
void mult();
void div();

void sum() {
    printf("Addition: %d + %d = %d\n", a, b, a + b);
}
void diff() {
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
}
void mult() {
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
}
void div() {
    printf("Division: %d / %d = %d\n", a, b, a / b);
}

int main(){
int choice;

while (1) {
        
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
      
        printf("Enter your choice : ");
        scanf("%d", &choice);


        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

       
        switch (choice) {
            case 1:
               sum();
                break;
            case 2:
               
                diff();
                break;
            case 3:
               
               mult();
                break;
            case 4:
                     div();
                break;
            default:
                printf("OPTION NOT AVAILABLE.\n");
        }
    }


}
