#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

node* createlinkedlist(int n);
void displaylist(node* head);

int main()
{
    int n = 0;
    node* HEAD = NULL;
    printf("\n How many nodes: ");
    scanf("%d", &n);
    HEAD = createlinkedlist(n);
    displaylist(HEAD);
    return 0;
}

node* createlinkedlist(int n)
{
    int i = 0;
    node* head = NULL;
    node* temp = NULL;
    node* p = NULL;
    for (i = 0; i < n; i++)
    {
        temp = (node*)malloc(sizeof(node));
        printf("Enter data for node number %d: ", i + 1);
        scanf("%d", &(temp->data));
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while (p->next != NULL)
                p = p->next;
            p->next = temp;
        }
    }
    return head;
}

void displaylist(node* head)
{
    node* p = head;
    while (p != NULL)
    {
        printf("\t %d->", p->data);
        p = p->next;
    }
}
