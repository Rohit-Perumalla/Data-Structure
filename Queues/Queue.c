#include <stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;

int isempty()
{
    return (front == -1 && rear == -1);
}
int isfull()
{
    return (rear == max - 1);
}
void insert(int value)
{
    if (isfull())
    {
        printf("the queue is overflow,you cannot insert any value\n");
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("%d is inserted into the queue.\n", value);
    }
}
void delete()
{
    if (isempty())
    {
        printf("The queue is underflow ,you cannot delete any vlaue.\n");
    }
    else
    {
        int deleted_value = queue[front];
        printf("%d is deleted from the queue.\n", deleted_value);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    if (isempty())
    {
        printf("The queue is empty, no values to display..\n");
    }
    else
    {
        printf("The queue elements are : ");
        for (int i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

// main( statement)
int main()
{
    int value, choice;
    while (1)
    {
        printf("\n***Queue Operations***\n");
        printf("----------------------------");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.isEmpty\n5.isFull\n6.Exit\n");
        printf("=>Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter your value: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            if (isempty())
            {
                printf("The queue is empty. \n");
            }
            else
            {
                printf("The que is not empty.\n");
            }
            break;
        case 5:
            if (isfull())
            {
                printf("The queue is full.\n");
            }
            else
            {
                printf("The queue is not full\n");
            }
            break;
        case 6:
            printf("Exiting the program./\n");
            return 0;
        default:
            printf("invalid choice, please try again.\n");
            break;
        }
    }
    return 0;
}
