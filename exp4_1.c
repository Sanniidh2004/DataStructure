#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    int id;
    char name[50];
    int age;
    int height;
    int weight;
};

struct person *arr = NULL; // dynamic array of persons
int n = 0;  // number of persons

// --------- Heap Helper Functions ---------
void swap(struct person *a, struct person *b) {
    struct person temp = *a;
    *a = *b;
    *b = temp;
}

// Min-Heapify based on Age
void minHeapify(struct person arr[], int size, int i) {
    int smallest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < size && arr[l].age < arr[smallest].age)
        smallest = l;
    if (r < size && arr[r].age < arr[smallest].age)
        smallest = r;

    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, size, smallest);
    }
}

// Max-Heapify based on Weight
void maxHeapify(struct person arr[], int size, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < size && arr[l].weight > arr[largest].weight)
        largest = l;
    if (r < size && arr[r].weight > arr[largest].weight)
        largest = r;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, size, largest);
    }
}

void buildMinHeap(struct person arr[], int size) {
    for (int i = size/2 - 1; i >= 0; i--)
        minHeapify(arr, size, i);
}

void buildMaxHeap(struct person arr[], int size) {
    for (int i = size/2 - 1; i >= 0; i--)
        maxHeapify(arr, size, i);
}

// Insert into Min-Heap (based on Age)
void insertMinHeap(struct person p) {
    n++;
    arr = realloc(arr, n * sizeof(struct person));
    arr[n-1] = p;

    int i = n - 1;
    while (i > 0 && arr[(i-1)/2].age > arr[i].age) {
        swap(&arr[i], &arr[(i-1)/2]);
        i = (i-1)/2;
    }
}

// Delete the oldest person (max age) from Min-Heap
void deleteOldest() {
    if (n == 0) {
        printf("Heap is empty!\n");
        return;
    }

    int maxAgeIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].age > arr[maxAgeIdx].age)
            maxAgeIdx = i;
    }

    printf("Deleted oldest person: %s (Age %d)\n", arr[maxAgeIdx].name, arr[maxAgeIdx].age);

    arr[maxAgeIdx] = arr[n-1];
    n--;
    arr = realloc(arr, n * sizeof(struct person));
    buildMinHeap(arr, n);
}

// --------- Menu Functions ---------
void readData() {
    printf("Enter number of persons: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(struct person));

    for (int i = 0; i < n; i++) {
        arr[i].id = i;
        printf("Enter Name, Age, Height, Weight for person %d:\n", i);
        scanf("%s %d %d %d", arr[i].name, &arr[i].age, &arr[i].height, &arr[i].weight);
    }
}

void displayPersons() {
    printf("\nId\tName\tAge\tHeight\tWeight\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%s\t%d\t%d\t%d\n", arr[i].id, arr[i].name, arr[i].age, arr[i].height, arr[i].weight);
}

void displayYoungestWeight() {
    if (n == 0) {
        printf("No persons available.\n");
        return;
    }

    int minAgeIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].age < arr[minAgeIdx].age)
            minAgeIdx = i;
    }

    printf("Weight of youngest person (%s, Age %d): %.2f kg\n",
           arr[minAgeIdx].name, arr[minAgeIdx].age, arr[minAgeIdx].weight * 0.453592);
}

// --------- Main ---------
int main(void) {
    int choice;
    do {
        printf("\nSannidhi Deb\n  2330044\n\n\nMAIN MENU (HEAP)\n");
        printf("1. Read Data\n");
        printf("2. Create a Min-heap based on the age\n");
        printf("3. Create a Max-heap based on the weight\n");
        printf("4. Display weight of the youngest person\n");
        printf("5. Insert a new person into the Min-heap\n");
        printf("6. Delete the oldest person\n");
        printf("7. Exit\n");
        printf("Enter option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                readData();
                displayPersons();
                break;
            case 2:
                buildMinHeap(arr, n);
                printf("Min-heap (Age) created.\n");
                displayPersons();
                break;
            case 3:
                buildMaxHeap(arr, n);
                printf("Max-heap (Weight) created.\n");
                displayPersons();
                break;
            case 4:
                displayYoungestWeight();
                break;
            case 5: {
                struct person p;
                p.id = n;
                printf("Enter Name, Age, Height, Weight for new person:\n");
                scanf("%s %d %d %d", p.name, &p.age, &p.height, &p.weight);
                insertMinHeap(p);
                printf("Person inserted into Min-heap.\n");
                displayPersons();
                break;
            }
            case 6:
                deleteOldest();
                displayPersons();
                break;
            case 7:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid option!\n");
        }
    } while(choice != 7);

    free(arr);
    return 0;
}
