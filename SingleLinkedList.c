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
        head = tmp;
    }
}

void delBeg(){
    // if(head != NULL){
        
    // }
    struct node *tmp= head ; 
    head = head->next;
    free(tmp);
}

void delLast(){
    struct node *p;
    for(p=head;p->next != last;p=p->next);
    p->next = NULL; 
    free(last);
    last = p; 
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

void search(int key)
{
}
void addNodeAny(int source, int data)
{
    struct node  *tmp, *p = head;

    int flag = 0;
    for (p = head; p != NULL; p = p->next)
    {
        if (p->data == source)
        {
            flag = 1;
            printf("\n%d added",data);
            tmp = malloc(sizeof(struct node));
            tmp->data = data;  
            tmp->next = p->next; 
            p->next  = tmp; 
            break;
        }
    }

    if (flag == 0)
    {
        printf("\nInvalid Source => %d",source);
    }
}

void delAny(int num){//10 
    struct node *p,*q; 
    if(head->data == num){
        delBeg();
    }else if(last->data == num){
        delLast();
    }else{
        for(q=head;q!=NULL;q=q->next){
            if(q->next->data == num){
                break;
            }
        }

        if(q == NULL){
            printf("\nInvalid Key");
        }else{
            p = q->next;
            q->next = p->next; 
            free(p); 
        }
    }
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

    addNodeAny(20, 400);
    addNodeAny(200, 4000);
    
    
    display();

    return 0;
}