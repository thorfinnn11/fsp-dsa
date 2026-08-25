#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void createNode() {
    int val;
    printf("Enter value to insert: ");
    scanf("%d", &val);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = val;
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

    printf("Node with value %d added.\n", val);
}

void displayList() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    int count = 0;
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("NULL\n");
    printf("total nodes: %i", count);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Create / Insert Node\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createNode();
                break;
            case 2:
                displayList();
                break;
            case 3:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}