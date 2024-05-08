 #include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* insertNode(struct node *head, int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    return head;
}

void traverseLinkedList(struct node *head) {
    if (head == NULL) {
        printf("Linked list is empty\n");
        return;
    }
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct node* deleteNode(struct node *head, int data) {
    struct node *prev = NULL, *curr = head;
    while (curr != NULL && curr->data != data) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Node with data %d not found\n", data);
        return head;
    }

    if (prev == NULL) {
        head = head->next;
    } else {
        prev->next = curr->next;
    }

    free(curr);
    printf("Node with data %d deleted from the linked list\n", data);
    return head;
}

int main() {
    struct node *head = NULL;
    int data;
    int count = 0;

    while (count < 5) {
        printf("Enter Data into Linked List: ");
        scanf("%d", &data);
        head = insertNode(head, data);
        count++;
    }

    traverseLinkedList(head);

    printf("Enter the data of node to delete: ");
    scanf("%d", &data);
    head = deleteNode(head, data);
    traverseLinkedList(head);
    return 0;
}
