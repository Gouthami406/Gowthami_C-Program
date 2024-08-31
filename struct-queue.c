#include <stdio.h>
#define MAX 100

struct queue {
    int items[MAX];
    int front, rear;
};

void initialize(struct queue *q) { // Corrected function name
    q->front = -1;
    q->rear = -1;
}

int isFull(struct queue *q) {
    return q->rear == MAX - 1 || q->front == q->rear + 1;
}

int isEmpty(struct queue *q) { // Corrected function name
    return q->front == -1 || q->front > q->rear;
}

void enqueue(struct queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full cannot insert %d\n", value);
        return;
    }
    if (q->front == -1)
        q->front = 0;
    q->rear++;
    q->items[q->rear] = value;
    printf("%d is inserted \n", value);
}

int dequeue(struct queue *q) { // Function to dequeue an element
    int item;
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1; // Return a special value to indicate an error
    }
    item = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }
    return item;
}

int peek(struct queue *q) { // Function to peek at the front element
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1; // Return a special value to indicate an error
    }
    return q->items[q->front];
}

int main() {
    struct queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Dequeued item: %d\n", dequeue(&q)); // Dequeue and print
    printf("Front item: %d\n", peek(&q)); // Peek at the front

    return 0;
}

