#include <stdio.h>

struct Order {
    int id;
    int deadline;
    int profit;
};

void sortOrders(struct Order orders[], int n) {
    struct Order temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (orders[j].profit < orders[j + 1].profit) {
                temp = orders[j];
                orders[j] = orders[j + 1];
                orders[j + 1] = temp;
            }
        }
    }
}
int findMaxDeadline(struct Order orders[], int n) {
    int max = orders[0].deadline;
    for (int i = 1; i < n; i++) {
        if (orders[i].deadline > max)
            max = orders[i].deadline;
    }
    return max;
}

void scheduleOrders(struct Order orders[], int n) {
    int maxDeadline = findMaxDeadline(orders, n);
    int slots[maxDeadline + 1]; 
    for (int i = 0; i <= maxDeadline; i++)
        slots[i] = -1;

    int totalProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = orders[i].deadline; j > 0; j--) {
            if (slots[j] == -1) {
                slots[j] = i;
                totalProfit += orders[i].profit;
                break;
            }
        }
    }
    printf("\nSannidhi Deb\n  2330044\n\n"); 
    printf("\nScheduled Orders (within deadlines):\n");
    for (int i = 1; i <= maxDeadline; i++) {
        if (slots[i] != -1) {
            int idx = slots[i];
            printf("Order %d (Deadline: %d, Profit: %d)\n",
                orders[idx].id, orders[idx].deadline, orders[idx].profit);
        }
    }
    printf("\nTotal Profit: %d\n", totalProfit);
}

int main() {
    int n;
    printf("Enter number of orders: ");
    scanf("%d", &n);

    struct Order orders[n];
    for (int i = 0; i < n; i++) {
        orders[i].id = i + 1;
        printf("Enter Deadline and Profit for Order %d: ", i + 1);
        scanf("%d %d", &orders[i].deadline, &orders[i].profit);
    }

    sortOrders(orders, n);
    scheduleOrders(orders, n);
    return 0;
}
