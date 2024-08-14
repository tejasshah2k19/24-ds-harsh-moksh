#include <stdio.h>

void print(int cnt) //       
{
    //3 2 2 1 1 0 0 0 
    printf("\n%d ", cnt); // 
    if(cnt == 0 ){
        printf(" %d",cnt);
    }else{
        cnt--;//
        printf(" %d",cnt);// 
        print(cnt);
    }
}

int main()
{

    print(3); // 
    return 0;
}
