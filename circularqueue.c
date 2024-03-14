 #include <stdio.h>
#define MAX 5

int array[MAX];
int front = -1;
int rear = -1;

void insert(int item) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("QUEUE OVERFLOW\n");
        return;
    }
    if (front == -1) {
        front = 0;
        rear = 0;
    } else {
        if (rear == MAX - 1)
            rear = 0;
        else
            rear = rear + 1;
    }
    array[rear] = item;
}

void del() {
    if (front == -1) {
        printf("QUEUE UNDERFLOW\n");
        return;
    } else {
        printf("Element deleted from queue is %d\n", array[front]);
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            if (front == MAX - 1)
                front = 0;
            else
                front = front + 1;
        }
    }
}

void display() {
    int front_pos = front, rear_pos = rear;
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("QUEUE ELEMENTS ARE:\n");
    if (front_pos <= rear_pos) {
        while (front_pos <= rear_pos) {
            printf("%d ", array[front_pos]);
            front_pos++;
        }
    } else {
        while (front_pos <= MAX - 1) {
            printf("%d ", array[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while (rear_pos >= front_pos) {
            printf("%d ", array[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}

int main() {
    int choice, item;
    do {
        printf("\n1. INSERT\n2. DELETE\n3. DISPLAY\n4. QUIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Input the element for insertion in circular queue: ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("QUITTING...\n");
                break;
            default:
                printf("Enter a valid choice between 1-4.\n");
        }
    } while (choice != 4);
    return 0;
}
