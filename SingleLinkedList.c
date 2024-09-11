#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // int *next;
} *head = NULL, *last = NULL;

void addNode(int num)
{
    struct node *tmp = NULL;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void addNodeBeg(int num)
{
    struct node *tmp;
    if (head == NULL)
    {
        addNode(num); // this will create head
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = head; 
        head = tmp ;
    }
}

void display()
{
    struct node *i;
    printf("\nElements in the linked list:\n");
    for (i = head; i != NULL; i = i->next)
    {
        printf(" %d", i->data);
    }
}

void search(int key){

}

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    
    display();
    addNodeBeg(15);
    display();

    search(25);

    return 0;
}