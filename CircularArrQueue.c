#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int queue_arr[MAX];
int front = -1;
int rear = -1;

void insert();
void delete();
void display();

int main() {
    int choice;
    while (1) {
        printf("\n1. Insert element to queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display all elements of queue\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}
void insert() {
    int add_item;
    if ((front == 0 && rear == MAX - 1) || (rear + 1) % MAX == front) {
        printf("Queue Overflow\n");
        return;
    }
    printf("Insert the element: ");
    scanf("%d", &add_item);
    if (front == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    queue_arr[rear] = add_item;
}

void delete() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted element is: %d\n", queue_arr[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; ; i = (i + 1) % MAX) {
        printf("%d ", queue_arr[i]);
        if (i == rear)
            break;
    }
    printf("\n");
}



