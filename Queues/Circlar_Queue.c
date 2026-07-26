#include <stdio.h>
#define MAX 5 // Size of Queue
int queue[MAX];
int front = -1, rear = -1;
void insert() {
    int item;
    if (rear == MAX - 1){
        printf("Queue is Full!\n");
    } else{
        if (front == -1) {
            front = 0; // first element to insert
        }
        printf("Enter the element to insert: ");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
        printf("%d inserted\n", item);
    }
}
void Delete() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);
        front++;
        if (front > rear) { // reset queue
            front = rear = -1;
        }
    }
}
void display() {
    if (front == -1) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
void isEmpty() {
    if (front == -1) {
        printf("Queue is Empty.\n");
    } else {
        printf("Queue is Not Empty.\n");
    }
}
void isFull() {
    if (rear == MAX - 1) {
        printf("Queue is Full.\n");
    } else {
        printf("Queue is Not Full.\n");
    }
}
int main() {
    int choice;
    while (1) {
        printf("\n---Queue Menu---\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. IsEmpty\n5. IsFull\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();break;
            case 2:
                Delete();break;
            case 3:
                display();break;
            case 4:
                isEmpty();break;
            case 5:
                isFull();break;
            case 6:
                return 0;default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}