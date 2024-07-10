#include <stdio.h>
#define SIZE 5

int q[SIZE];
int f = -1;
int r = -1;

void enqueue(int num)
{
    if (r == SIZE - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        r++;
        q[r] = num;
        if (f == -1)
        {
            f = 0; // first insertion
        }
    }
}

void dequeue()
{
    if (f == -1)
    {
        printf("\nQueue is Empty");
    }
    else if (f == r)
    {
        printf("\n%d removed", q[f]);
        f = -1;
        r = -1; // empty
    }
    else
    {
        printf("\n%d removed", q[f]);
        f++;
    }
}

void display()
{
    int i;
    if (f == -1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); // 10 20 30
    dequeue(); // 10 removde
    display(); // 20 30
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    return 0;
}