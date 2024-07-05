#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];
int top = -1; // empty

void push(int num)
{
    if (top == SIZE - 1)
    {
        printf("\nSTACK FULL");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\nSTACK IS EMPTY");
    }
    else
    {
        printf("\nElements in the STACk :");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack Empty:");
    }
    else
    {
        printf("\n%d pop", stack[top]);
        top--;
    }
}

void peek(int location){//1 2  
    int index = top - location + 1; 
    if(index < 0 || index >= SIZE ){
        printf("\nInvalid Location");
    }else{
        printf("\n%d",stack[index]);
    }
}
int main()
{

    int choice;
    int num;

    while (-1) // 1 -1 true  0:false
    {

        printf("\n0 For Exit\n1 For PUSH\n2 For Display\n3 For pop\nEnter  choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            push(num);
            break;
        case 1 + 1:
            display();
            break;
        case 0:
            exit(0);
        case 3:
            pop();
            break;

        default:
            printf("\nInvalid Choice PTA::");
            break;
        }
    }
    return 0;
}