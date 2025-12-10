#include <stdio.h>

typedef struct {
    int weight;
    int profit;
    float ratio;
} Item;

void sortItems(Item items[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (items[i].ratio < items[j].ratio) {
                Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

int main() {
    int n = 3;
    int m = 20;  
    int weights[] = {18, 15, 10};
    int profits[] = {25, 24, 15};

    Item items[n];

    for (int i = 0; i < n; i++) {
        items[i].weight = weights[i];
        items[i].profit = profits[i];
        items[i].ratio = (float)profits[i] / weights[i];
    }

    sortItems(items, n);

    int remaining_capacity = m;
    float total_profit = 0.0;

    for (int i = 0; i < n; i++) {
        if (items[i].weight <= remaining_capacity) {
            
            total_profit += items[i].profit;
            remaining_capacity -= items[i].weight;
        } else {
            
            total_profit += items[i].profit * ((float)remaining_capacity / items[i].weight);
            remaining_capacity = 0;
            break;
        }
    }
    printf("\nSannidhi Deb\n  2330044\n\n");
    printf("Maximum Profit = %.2f\n", total_profit);

    return 0;
}
