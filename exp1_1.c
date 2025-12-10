#include <stdio.h>
#include <limits.h>

void findSecondMinMax(int A[], int n) {
    int smallest = A[0], largest = A[0];
    int second_smallest = INT_MAX, second_largest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (A[i] < smallest) {
            second_smallest = smallest;
            smallest = A[i];
        } else if (A[i] < second_smallest && A[i] != smallest) {
            second_smallest = A[i];
        }
    }

    for (int i = 1; i < n; i++) {
        if (A[i] > largest) {
            second_largest = largest;
            largest = A[i];
        } else if (A[i] > second_largest && A[i] != largest) {
            second_largest = A[i];
        }
    }

    printf("\nSannidhi Deb\n  2330044\n\n");
    printf("Second Smallest = %d\n", second_smallest);
    printf("Second Largest = %d\n", second_largest);
}

int main() {
    int A[] = {10, 5, 20, 8, 30};
    int n = sizeof(A) / sizeof(A[0]);

    findSecondMinMax(A, n);

    return 0;
}
