 #include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node* prev;
};

struct node *head, *tail;

void create() {
    struct node *newnode;
    head = 0;
    int choice;

    do {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;

        if (head == 0) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

        printf("Do you want to insert another data? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    } while (choice == 1);
}

void display() {
    struct node *temp;
    temp = head;
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void deleteBeg() {
    struct node *temp;
    if (head == 0) {
        printf("List is empty\n ");
    } else {
        temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = 0;
        free(temp);
    }
}

void delEnd() {
    struct node *temp;
    if (tail == 0) {
        printf("List is empty\n ");
    } else {
        temp = tail;
        tail = tail->prev;
        if (tail != NULL)
            tail->next = 0;
        free(temp);
    }
}

int main() {
    create();
    printf("List after creation: ");
    display();
    deleteBeg();
    printf("List after deleting the beginning node: ");
    display();
    delEnd();
    printf("List after deleting the end node: ");
    display();
    return 0;
}
