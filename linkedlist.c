#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert an element at the end of the list
void insertElement(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete the maximum element from the list
void deleteMaxElement(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    int max = temp->data;
    struct Node* maxNode = temp;
    while (temp != NULL) {
        if (temp->data > max) {
            max = temp->data;
            maxNode = temp;
        }
        prev = temp;
        temp = temp->next;
    }
    if (maxNode == *head) {
        *head = (*head)->next;
    } else {
        prev->next = maxNode->next;
    }
    free(maxNode);
    printf("Maximum element %d deleted from the list.\n", max);
}

// Function to arrange the list in sorted order
void arrangeList(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* current = *head;
    struct Node* index = NULL;
    int temp;
    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
    printf("List arranged in sorted order.\n");
}

// Function to display the elements of the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    printf("List elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main method to demonstrate the functionalities
int main() {
    struct Node* head = NULL;
    
    // Create a list
    insertElement(&head, 5);
    insertElement(&head, 2);
    insertElement(&head, 8);
    insertElement(&head, 3);
    insertElement(&head, 1);
    
    // Display the initial list
    printf("Initial list:\n");
    displayList(head);
    
    // Delete the maximum element
    deleteMaxElement(&head);
    
    // Display the list after deleting the maximum element
    printf("List after deleting the maximum element:\n");
    displayList(head);
    
    // Arrange the list in sorted order
    arrangeList(&head);
    
    // Display the list after arranging in sorted order
    printf("List after arranging in sorted order:\n");
    displayList(head);
    
    return 0;
}
