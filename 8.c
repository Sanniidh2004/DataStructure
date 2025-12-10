//Detection of prime numbers using function and call by value and reference

#include <stdio.h>

int prime(int n) {
    if (n <= 1) {
        return 0;     }
    
     for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
    }

   // void prime(int n, int *result) {
    //*result = 1; 
    //if (n <= 1) {
      //  *result = 0;
        //return;
    //}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
 //int result;
    //prime(number, &result);
    //if (result) {
      //  printf("%d is a prime number \n", number);
    //} else {
      //  printf("%d is not a prime number \n", number);
    //}
    return 0;
}
