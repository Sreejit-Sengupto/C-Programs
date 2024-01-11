#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}

void insertFirst(struct Node **head, int value)
{
    struct Node *node = createNode(value);
    node->next = *head;
    *head = node;
}

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NUll\n");
}

struct Node *reverseList(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next = curr->next;

    while (curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next;
        if (next != NULL)
        {
            next = next->next;
        }
    }
    return prev;
}

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;
    insertFirst(&head, 1);
    insertFirst(&head, 2);
    insertFirst(&head, 3);
    insertFirst(&head, 4);
    insertFirst(&head, 5);
    insertFirst(&head, 6);
    printf("Original List\n");
    printList(head);
    struct Node *newHead = reverseList(head);
    printf("Reversed List\n");
    printList(newHead);
    return 0;
}
