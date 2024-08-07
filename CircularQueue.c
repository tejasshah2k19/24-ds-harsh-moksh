#include <stdio.h>
#define SIZE 5

int q[SIZE];
int f = -1;
int r = -1;

void enqueue(int num)
{
    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQueue is Full : %d\n",num);
    }
    else if (r == f - 1)
    {
        printf("\nQueue is Full  : %d\n",num);
    }
    else if (r == SIZE - 1 && f != 0)
    {
        r = 0;
        q[r] = num;
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
    else if (f == SIZE - 1)
    {
        printf("\n%d removed", q[f]);
        f = 0;
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
    printf("\n");
    if (f == -1)
    {
        printf("\nQueue is Empty");
    }
    else if (f > r)
    {

        for (i = f; i < SIZE; i++)
        {
            printf(" %d", q[i]);
        }

        for (i = 0; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
    else
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }

    printf("\n");
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); // 10 20 30
    enqueue(40);
    enqueue(50);
    enqueue(60);//full 
    display();//10 20 30 40 50 
    dequeue();//-10 
    dequeue();//-20 
    dequeue();//-30 
    display();//40 50 
    enqueue(60);//done 
    display();//40 50 60  
    
    return 0;
}