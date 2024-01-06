#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* f = NULL;
struct Node* r = NULL;

void linkedListTraversal(struct Node* ptr) {
    printf("Printing the elements of the linked list:\n");
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (n == NULL) {
        printf("Queue is full\n");
    } else {
        n->data = val;
        n->next = NULL;
        if (f == NULL) {
            f = r = n;
        } else {
            r->next = n;
            r = n;
        }
    }
}

int dequeue() {
    int val = -1;

    if (f == NULL) {
        printf("Queue is Empty\n");
    } else {
        struct Node* ptr = f;
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main() {
    linkedListTraversal(f);
    printf("Dequeueing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("Dequeueing element %d\n", dequeue());
    printf("Dequeueing element %d\n", dequeue());
    printf("Dequeueing element %d\n", dequeue());
    printf("Dequeueing element %d\n", dequeue());
    linkedListTraversal(f);

    return 0;
}
