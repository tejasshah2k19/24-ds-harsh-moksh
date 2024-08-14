#include <stdio.h>
#define SIZE 8
    //           i 
int masterD[] = {10, 5, 25, 22, 63, 63, 22, 9};
int playerA[SIZE]; //{  0   1 2 3 }

int playerB[SIZE];//{0 1 2 3 }

void distribute(){

        // playerA : 10 25 63 22 
        
        // playerB : 5 22 63 9 
    int i;
    for(i=0;i<SIZE;i++){
        if(i %2 == 0 ){
            //even 
            playerB[] = masterD[];
        }else{
            //odd 
            playerA[] = masterD[];
        }
    }

}

void display(){
    //playerA print 

    //playerB print 
}
int main()
{
    distribute();
    display();
    return 0;
}