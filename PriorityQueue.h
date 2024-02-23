#ifndef PRIORITYQUEUE
#define PRIORITYQUEUE

typedef struct Node {
    int data;
    int priority;
    struct Node* next;
} Node;

typedef struct PriorityQueue {
    Node* front;
} PriorityQueue;

Node* createNode(int data, int priority);

void initializeQueue(PriorityQueue* queue);

int isEmpty(PriorityQueue* queue);

void enqueue(PriorityQueue* queue, int data, int priority);

int dequeue(PriorityQueue* queue);

int getFirstElement(PriorityQueue* queue);

void destroyQueue(PriorityQueue* queue);

void displayQueue(PriorityQueue* queue);

#endif