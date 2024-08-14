#include <stdio.h>

void print(int cnt) //     
{
    
    if(cnt == 0 ){
        printf(" %d",cnt);//0 0 1 2 
    }else{
        cnt--; 
        print(cnt);
        printf("%d ",cnt);
    }
 }

int main()
{

    print(3); //2 1 1 , 0 0 1 2 , 0 0  1 2 , 0 0 1 2   
    return 0;
}
 