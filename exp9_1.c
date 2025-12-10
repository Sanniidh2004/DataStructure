#include <stdio.h>
#include <limits.h>

void printOptimalParens(int i, int j, int n, int bracket[n][n]) {
    if (i == j) {
        printf("A%d", i);
        return;
    }
    printf("(");
    printOptimalParens(i, bracket[i][j], n, bracket);
    printOptimalParens(bracket[i][j] + 1, j, n, bracket);
    printf(")");
}

void matrixChainOrder(int p[], int n) {
    int m[n][n];      
    int bracket[n][n]; 
    int i, j, k, L, q;

    for (i = 1; i < n; i++)
        m[i][i] = 0;


    for (L = 2; L < n; L++) {
        for (i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++) {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    bracket[i][j] = k;
                }
            }
        }
    }
    printf("\nSannidhi Deb\n2330044\n\n");
    printf("Optimal Parenthesization: ");
    printOptimalParens(1, n - 1, n, bracket);
    printf("\nMinimum number of scalar multiplications: %d\n", m[1][n - 1]);
}

int main() {
    int p[] = {30, 35, 15, 5, 10, 20, 25}; 
    int n = sizeof(p) / sizeof(p[0]);

    matrixChainOrder(p, n);

    return 0;
}
