//Reverse elements of A{10,12,13,15,-7,2} using lower bound and upper bound

#include <stdio.h>

void reverse(int A[], int lb, int ub) {
    int temp;
    while (lb < ub) {
        temp = A[lb];
        A[lb] = A[ub];
        A[ub] = temp;

        lb++;
        ub--;
    }
}

int main() {
    int A[] = {10, 12, 13, 15, -7, 2};
    int n = 6; 
    printf("The Array is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
   
   reverse(A, 0, n-1);

    printf("\nThe Reversed Array is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
  return 0;
}

