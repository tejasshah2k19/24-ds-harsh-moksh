#include <stdio.h>

void print(int start,int end)  //1,9  3,9 5,9  7,9  9,9 
{
     
     printf(" %d",start);//1 3 5  7  9
     start++ ;//10
     start++ ; //11 
     if(start <= end){ 
        print(start,end);//9,9
     }
}

int main()
{


    print(1,9);
    return 0;
}
 