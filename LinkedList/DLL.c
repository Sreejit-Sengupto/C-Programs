#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
    struct Node * prev;
};

struct Node *createNode(int val) {
    struct Node *node = (struct Node *)(malloc(sizeof(struct Node)));
    node->data = val;
    node->next = NULL;
    node->prev = NULL;
}

void insertFirst(struct Node *head, int val) {
    struct Node *node = createNode(val);
    node->next = head;
    if (head != NULL) {
        head->next = node;
    }
    head = node;
}

void display(struct Node *head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("END\n");
}

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;
    insertFirst(head, 1);
    insertFirst(head, 2);
    insertFirst(head, 3);
    insertFirst(head, 4);
    insertFirst(head, 5);
    insertFirst(head, 6);
    insertFirst(head, 7);
    display(head);
    return 0;
}
