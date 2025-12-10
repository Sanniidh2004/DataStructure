#include <stdio.h>
void prefixSum(int arr[], int n) {
    int prefix[n];
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    printf("\nSannidhi Deb\n 2330044\n\n ");
    printf("Input Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nOutput (Prefix Sum) Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", prefix[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    prefixSum(arr, n);

    return 0;
}
