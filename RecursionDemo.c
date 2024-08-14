#include <stdio.h>

void div()
{
    printf("\nDiv"); // 1
}

void sub()
{
    div();
    printf("\nSub"); // 2
}

void add()
{
    sub();
    printf("\nAdd"); // 3
}

void pause()
{
    printf("\nPause");
}

void start()
{
    printf("\n1");
    printf("\n2");
    pause(); // call pause  -> nesting -> nested function  , function {start} -> another function
    printf("\n3");
    printf("\n4");
}

int count = 1;
void greet()
{
    printf("\nhi %d", count++); // 1 2 3 4 5 6 7 8 9 ........infinite
    if (count != 5)
    {
        greet(); // recursion -> function -> same function -> itself
    }
}

int main()
{

    greet(); // stack -> overflow?
    return 0;
}