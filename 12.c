//Insertion, Deletion, Linear Search, Sorting and Traversal in a 1-D array using menu-driven operation

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void createList(int n) {
    int data;
    struct Node* temp, *newNode;
    for (int i = 0; i < n; i++) {
        printf("Enter Data For Node %d: ", i + 1);
        scanf("%d", &data);
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
   }
    }
}

void traverse() {
    struct Node* temp = head;
    if (head == NULL) {
        printf("List Is Empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int isEmpty() {
return head == NULL;
}

void insertAtBeginning(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    printf("List After Insertion : ");
    traverse();
}

void insertAtEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
 struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("List After Insertion : ");
    traverse();
}

void insertAtPosition(int data, int position) {
    if (position < 1) {
        printf("Invalid Position.\n");
        return;
    }
if (position == 1) {
        insertAtBeginning(data);
        return;
    }
    int count = 1;
    struct Node* temp = head;
    while (count < position - 1 && temp != NULL) {
        count++;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position Out Of Range.\n");
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
    printf("List After Insertion : ");

 traverse();
}

void deleteAtBeginning() {
    if (head == NULL) {
        printf("List Is Empty.\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    printf("List After Deletion : ");
    traverse();
}

void deleteAtEnd() {
    if (head == NULL) {
printf("List Is Empty.\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    printf("List After Deletion : ");
    traverse();
}

void deleteAtPosition(int position) {
  if (position < 1) {
        printf("Invalid Position\n");
        return;
    }
    if (position == 1) {
        deleteAtBeginning();
        return;
    }
    int count = 1;
    struct Node* temp = head;
    while (count < position - 1 && temp != NULL) {
        count++;
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Position Out Of Range.\n");
        return;
    }
    struct Node* to_be_deleted = temp->next;
 temp->next = temp->next->next;
    free(to_be_deleted);
    printf("List After Deletion : ");
    traverse();
}

int countNodes() {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    printf("Name : Sannidhi Deb \nRoll No.: 2330044\n");
    int n, choice, data, position;
    printf("Enter The Number Of Nodes : ");
 scanf("%d", &n);
    createList(n);

    while (1) {
        printf("\nMenu\n");
        printf("1. Traverse\n");
        printf("2. Check If List Is empty\n");
        printf("3. Insert At Beginning\n");
        printf("4. Insert At End\n");
        printf("5. Insert At Position\n");
        printf("6. Delete At Beginning\n");
        printf("7. Delete At End\n");
        printf("8. Delete At Position\n");
        printf("9. Count Nodes\n");
        printf("10. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice) {
 case 1:
                traverse();
                break;
            case 2:
                if (isEmpty()) {
                    printf("List Is Empty.\n");
                } else {
                    printf("List Is Not Empty.\n");
                }
                break;
            case 3:
                printf("Enter Data To Insert : ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 4:
                printf("Enter Data To Insert : ");
                scanf("%d", &data);
                insertAtEnd(data);

  break;
            case 5:
                printf("Enter Data To Insert : ");
                scanf("%d", &data);
                printf("Enter Position : ");
                scanf("%d", &position);
                insertAtPosition(data, position);
                break;
            case 6:
                deleteAtBeginning();
                break;
            case 7:
                deleteAtEnd();
                break;
            case 8:
                printf("Enter Position : ");
                scanf("%d", &position);
                deleteAtPosition(position);
                break;
case 9:
                printf("Number Of Nodes : %d\n", countNodes());
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
return 0;
}