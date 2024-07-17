#include <stdio.h>
#define SIZE 5 

void search(int[],int); // declare

void add(int,int); // data type

void scan(int a[]) // 2000:0
{
    int i;
    for(i=0;i<SIZE;i++){
        printf("\nEnter value");
        scanf("%d",&a[i]);
    }
}

void print(int a[])
{
    
    int i;
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}
int main()
{
    int a[5];
    //   2000:0 1 2 3 4
    scan(a);
    print(a); // call by value
    search(a,12);
    
    return 0;
}


void search(int a[],int key){
    int i;
    int found = 0; // not found 

    for(i=0;i<SIZE;i++){
        if(a[i] == key ){
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("\n%d Present",key);
    else 
        printf("\n%d Not Present",key);
    
}
// Pre-ANSI
// ANSI

// int a,float f,char c -> primitive -> call by pass by value --> pointer
// non primitive -> array structure pointer class object enum --> ref

// int -> Integer

// java -> pointer X
