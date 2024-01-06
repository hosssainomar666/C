#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
} *head = NULL;

void insertAtFirst(int value) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = value;
    n->next = head;
    head = n;
}

void insertAtLast(int value) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->next = NULL;
    n->data = value;
    if (head == NULL) {
        head = n;
    } else {
        struct node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void insertAtPos(int value, int pos) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = value;

    if (pos == 1) {
        n->next = head;
        head = n;
        return;
    }

    struct node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
    } else {
        n->next = temp->next;
        temp->next = n;
    }
}

void display() {
    struct node* temp;
    temp = head;
    printf("The list is: ");
    if (head == NULL) {
        printf("Empty");
    } else {
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    insertAtLast(10);
    insertAtFirst(5);
    insertAtLast(20);
    insertAtPos(15, 2);
    display();

    return 0;
}
