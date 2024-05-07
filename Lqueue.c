#include<stdio.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("Queue is full\n");
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=x;
        printf("%d inserted into queue\n",queue[rear]);
    }
    else{
        rear++;
        queue[rear]=x;
           printf("%d inserted into queue\n",queue[rear]);
    }
}

 void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else if (front == rear) {
        printf("%d Deleted from Queue\n", queue[front]);
        front = rear = -1;
    } else {
        printf("%d Deleted from Queue\n", queue[front]);
        front++;
    }
}



void peek(){
    if(front==-1&&rear==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Front element is %d\n",queue[front]);
    }
}

void display(){
    printf("Queue Elements Are: ");
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(int i=front;i<rear+1;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main(){
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(18);
    display();
    peek();
    dequeue();
    peek();
    display();
    return 0;
}