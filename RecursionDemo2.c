#include <stdio.h>



void add()
{

}

void sub(){

}

void mul(){
    sub(); 

}




void greet(int start, int end) // 2 , 5
{
    start++; // 2 5
    if (start <= end)
    {
        greet(start, end); // 2,5
    }
    printf(" %d", start); // 1 2
}

int main()
{

    greet(1,5); // stack -> overflow?
     
    return 0;
}//2 3 4 5 1 
 //5 4 3 2 1
 // 


