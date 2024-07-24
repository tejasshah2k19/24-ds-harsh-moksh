#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1; // empty
int rear = -1;  // empty

void enQueue(int num);
void deQueue();
void display();

int main()
{
    int choice;
    int num;
    printf("\n0 For Exit\n1 For Insert\n2 For Delete\n3 For Display\nEnter choice");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter Num");
        scanf("%d", &num);
        enQueue(num);
        break;
    case 2:
        deQueue();
        break;
    case 3:
        display();
        break;
    default:
        printf("\nInvalid Choice PTA");
        break;
    case 0:
        exit(11);
    }
    return 0;
}

void enQueue(int num)
{

    if (rear == SIZE - 1)
    {
        printf("\nQueue is full");
    }
    else
    {
        rear++;
        queue[rear] = num;
        // first time
        if (front == -1)
        {
            front = 0;
        }
    }
}

void deQueue() {}
void display()
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf(" %d", queue[i]);
    }
}
