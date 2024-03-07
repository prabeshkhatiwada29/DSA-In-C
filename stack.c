 #include<stdio.h>
#define MAX 5

void push();
void pop();
void display();

int stack[MAX];
int top = -1;

int main() {
    int choice;
    do {
        printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice(1-4): ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting ...\n");
                break;
            default:
                printf("Enter a valid choice (1-4)\n");
        }
    } while(choice != 4);
    return 0;
}

void push() {
    int item;
    if(top == MAX - 1) {
        printf("\nOverflow: Stack is full\n");
    } else {
        printf("\nEnter a value to push onto the stack: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}

void pop() {
    int item;
    if(top == -1) {
        printf("\nUnderflow: Stack is empty\n");
    } else {
        item = stack[top];
        top--;
        printf("\n%d removed from the stack\n", item);
    }
}

void display() {
    int i;
    if(top == -1) {
        printf("\nUnderflow: Stack is empty\n");
    } else {
        printf("\nStack elements are:\n");
        for(i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
