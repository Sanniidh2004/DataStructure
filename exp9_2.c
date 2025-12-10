#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void LCS(char X[], char Y[], int m, int n) {
    int L[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    int index = L[m][n];
    char lcs[index + 1];
    lcs[index] = '\0'; 

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs[index - 1] = X[i - 1];
            i--;
            j--;
            index--;
        } else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }
    printf("\nSannidhi Deb\n2330044\n\n");
    printf("Longest Common Subsequence: ");
    for (int k = 0; lcs[k] != '\0'; k++) {
        printf("%c", lcs[k]);
        if (lcs[k + 1] != '\0')
            printf(",");
    }
    printf("\nLength of Longest Common Subsequence: %d\n", L[m][n]);
}

int main() {
    char X[] = {'A', 'B', 'C', 'B', 'D', 'A', 'B'};
    char Y[] = {'B', 'D', 'C', 'A', 'B', 'A'};

    int m = sizeof(X) / sizeof(X[0]);
    int n = sizeof(Y) / sizeof(Y[0]);

    LCS(X, Y, m, n);

    return 0;
}
