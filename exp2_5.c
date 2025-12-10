#include <stdio.h>

void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, target);
        return;
    }
    hanoi(n - 1, source, auxiliary, target);
    printf("Move disk %d from %c to %c\n", n, source, target);
    hanoi(n - 1, auxiliary, target, source);
}

int main() {
    int n;
    printf("\nSannidhi Deb\n  2330044\n\n");
    printf("Enter number of disks: ");
    scanf("%d", &n);
    printf("Steps to solve Towers of Hanoi:\n");
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
