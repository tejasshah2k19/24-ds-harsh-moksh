#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 50

void push(char num);
void pop();
void display();

char stack[SIZE];
int top = -1; // empty

int main()
{

    char str[SIZE];
    int i;
    printf("\nEnter string");
    gets(str);//read string 
    //royal'\0'

    for(i=0;str[i] != '\0' ;i++){
        push(str[i]);//0 1 2 3 
    }
    display();
     

     
    return 0;
}

void push(char num)
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
        printf("\n%c POP", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%c", stack[i]);
    }
}