#include <stdio.h>

int change(int p)//12000:10
{
    p++;//11
    p++;//12
    //12000:12 
    return p; //return p,q  // return p ; return q ; -> single value return 
    //multivalue return -> function 5type -> pointer function
}

int main()
{

    int p = 10;//5000:10
    p = change(p);
    printf("\np = %d", p);//10 10 10 GV 
    p = change(p);
    printf("\np = %d", p);//10 10 10 GV 
    
    return 0; 
}