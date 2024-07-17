#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void push(int num);
void pop();
void display();

int stack[SIZE];
int top = -1; // empty

int main()
{

    int choice;
    int num;

    while (-1) // 1 -1 0
    {
        printf("\n1 For PUSH\n2 For POP\n3 For Display\n0 For Exit\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            printf("\nEnter VALID CHOICE !!!");
        }
    }

    return 0;
}

void push(int num)
{
    if (top == SIZE - 1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nSTACK IS EMPTY");
    }
    else
    {
        printf("\n%d POP", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}