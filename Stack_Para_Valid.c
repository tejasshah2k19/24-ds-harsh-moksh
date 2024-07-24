#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

void push(char num);
char pop();
void display();

char stack[SIZE];
int top = -1; // empty

int main()
{

    char str[SIZE];
    int i;
    char x;
    printf("\nEnter string");
    gets(str); // read string
               // royal'\0'
               // [ ( ] )
               // 0 1 2
               /*
           
                   stack
                   (
                   [
           
               */
    int flag = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        //( [ { } ] )
        // 0 1 2 3 4 5
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(str[i]);
        }
        else
        {
            // ]
            x = pop(); //(
            if (str[i] == '}' && x == '{')
            {
                continue;
            }
            else if (str[i] == ')' && x == '(')
            {
                continue;
            }
            else if (str[i] == ']' && x == '[')
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0 && isEmpty())
    {
        printf("\nValid");
    }
    else
    {
        printf("\nInvalid");
    }
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

char pop()
{
    if (top == -1)
    {
        printf("\nSTACK IS EMPTY");
    }
    else
    {
        // printf("\n%c POP", stack[top]);
        return stack[top--]; // char --
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
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