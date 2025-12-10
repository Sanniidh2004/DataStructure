#include <stdio.h>
#define MAX 1000 
int main() {
    int A[100], freq[MAX] = {0};
    int n;
printf("\nSannidhi Deb\n 2330044\n\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        freq[A[i]]++; 
    }

    int duplicate_count = 0;
    int max_freq = 0;
    int most_repeated = A[0];

    for (int key = 0; key < MAX; key++) {
        if (freq[key] > 1) {
            duplicate_count++;
        }
        if (freq[key] > max_freq) {
            max_freq = freq[key];
            most_repeated = key;
        }
    }

    printf("\nThe input of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    printf("\nTotal number of duplicate values = %d", duplicate_count);
    printf("\nThe most repeating element in the array = %d\n", most_repeated);

    return 0;
}


