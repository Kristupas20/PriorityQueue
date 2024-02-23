#include <stdio.h>
#include <stdlib.h>
#include "PriorityQueue.h"


Node* createNode(int data, int priority) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->data = data;
        newNode->priority = priority;
        newNode->next = NULL;
    }
    return newNode;
}

void initializeQueue(PriorityQueue* queue) {
    queue->front = NULL;
}

int isEmpty(PriorityQueue* queue) {
    return (queue->front == NULL);
}

void enqueue(PriorityQueue* queue, int data, int priority) {
    Node* newNode = createNode(data, priority);

    if (isEmpty(queue) || priority > queue->front->priority) {
        newNode->next = queue->front;
        queue->front = newNode;
    } 
    else {
        Node* temp = queue->front;
        while (temp->next != NULL && temp->next->priority >= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int dequeue(PriorityQueue* queue) {
    if (isEmpty(queue)) {
        return -1;
    }

    Node* temp = queue->front;
    queue->front = queue->front->next;
    free(temp);

    return 0;
}

int getFirstElement(PriorityQueue* queue){
    if (!isEmpty(queue)){
        return queue->front->data;
    }
}

void destroyQueue(PriorityQueue* queue) {
    while (queue->front != NULL) {
        Node* temp = queue->front;
        queue->front = queue->front->next;
        free(temp);
    }
}

void displayQueue(PriorityQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Priority Queue: ");
    Node* temp = queue->front;
    while (temp != NULL) {
        printf("(%d, %d) ", temp->data, temp->priority);
        temp = temp->next;
    }
    printf("\n");
}