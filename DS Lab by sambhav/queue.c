#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5

int front = -1, rear = -1, queue[MAX_QUEUE_SIZE];

void enqueue(int data) {
    if (rear == MAX_QUEUE_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = data;
    printf("Inserted: %d\n", data);
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        front = -1;
        rear = -1;
        return;
    }
    printf("Deleted: %d\n", queue[front++]);
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}
