#include <stdio.h>
void EXCHANGE(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void ROTATE_RIGHT(int *p1, int p2) {
    for (int i = p2 - 1; i > 0; i--) {
        EXCHANGE(&p1[i], &p1[i - 1]);
    }
}

int main() {
    int A[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int N = 9;
    
printf("\nSannidhi Deb\n 2330044\n\n");
    printf("Before ROTATE: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    ROTATE_RIGHT(A, 5);

    printf("\nAfter ROTATE: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
